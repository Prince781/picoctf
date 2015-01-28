-- Use this for testing on a MySQL db
create table users (
	id int(6) unsigned auto_increment primary key,
	username varchar(30) not null,
	password varchar(30) not null,
	user_level int(6)
)
