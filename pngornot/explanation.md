PNG or Not
==========
Worth: 100 points

The challenge: you're given an unusual PNG file that looks like it contains
something else. This is the file:

![Weird PNG](image)

The first thing to do is view an output of this file in hexdump:

```
00000000  89 50 4e 47 0d 0a 1a 0a  00 00 00 0d 49 48 44 52  |.PNG........IHDR|
00000010  00 00 01 18 00 00 01 18  08 02 00 00 00 08 ec 7e  |...............~|
00000020  db 00 00 00 06 74 52 4e  53 00 fe 00 01 00 fd 5b  |.....tRNS......[|
00000030  6c 0d 3b 00 00 05 c1 49  44 41 54 78 9c ed dd 41  |l.;....IDATx...A|
00000040  8e 23 37 10 00 41 cb f0  ff bf 3c 7b f0 99 07 ee  |.#7..A....<{....|
00000050  66 99 a4 1c 71 b5 d0 dd  96 26 41 60 0b 64 7f 7e  |f...q....&A`.d.~|
00000060  7e 7e fe 02 fe cc df a7  1f 00 be 81 90 20 20 24  |~~...........  $|
00000070  08 08 09 02 42 82 80 90  20 20 24 08 fc b3 fa 0f  |....B...  $.....|
00000080  9f cf e7 bf 7c 8e df b6  9a 83 ad 9e 7f fa f3 2b  |....|..........+|
00000090  d5 bc 6e fa be d5 f5 a7  bf cf 53 56 cf 6f 45 82  |..n.......SV.oE.|
000000a0  80 90 20 20 24 08 08 09  02 42 82 80 90 20 20 24  |..  $....B...  $|
000000b0  08 2c e7 48 2b a7 f6 2f  7d eb dc 66 d7 a9 eb 9f  |.,.H+../}..f....|
000000c0  fa 1e 5e f9 7b b3 22 41  40 48 10 10 12 04 84 04  |..^.{."A@H......|
000000d0  01 21 41 40 48 10 10 12  04 b6 e7 48 2b d5 7e 92  |.!A@H......H+.~.|
000000e0  e9 f9 cf f4 5c e2 d4 3e  9c db ae 7f ea 7b de 55  |....\..>.....{.U|
000000f0  3d a7 15 09 02 42 82 80  90 20 20 24 08 08 09 02  |=....B...  $....|
00000100  42 82 80 90 20 90 cd 91  6e 73 6a 1f cb ee 7d 6f  |B... ...nsj...}o|
00000110  db bf b4 9a cf 9c 9a 17  bd c2 8a 04 01 21 41 40  |.............!A@|
00000120  48 10 10 12 04 84 04 01  21 41 40 48 10 f8 da 39  |H.......!A@H...9|
00000130  d2 4a 35 0f a9 e6 2d b7  7d 9e df 63 45 82 80 90  |.J5...-.}..cE...|
00000140  20 20 24 08 08 09 02 42  82 80 90 20 20 24 08 64  |  $....B...  $.d|
00000150  73 a4 db e6 12 df 7a be  dc b4 db 7e c7 95 db 9e  |s.....z....~....|
00000160  d3 8a 04 01 21 41 40 48  10 10 12 04 84 04 01 21  |....!A@H.......!|
00000170  41 40 48 10 d8 9e 23 bd  32 0f a9 dc 36 77 fa d6  |A@H...#.2...6w..|
00000180  cf af bc f2 f7 66 45 82  80 90 20 20 24 08 08 09  |.....fE...  $...|
00000190  02 42 82 80 90 20 20 24  08 7c 6e db d7 31 ed f5  |.B...  $.|n..1..|
000001a0  79 c8 f4 7d ab eb ff df  fe ae ac 48 10 10 12 04  |y..}.......H....|
000001b0  84 04 01 21 41 40 48 10  10 12 04 84 04 81 e5 7e  |...!A@H........~|
000001c0  a4 db de c3 73 db 3c 64  f7 f3 b7 cd 9d 5e d9 e7  |....s.<d.....^..|
000001d0  33 3d c7 ab 7e 5f 2b 12  04 84 04 01 21 41 40 48  |3=..~_+.....!A@H|
000001e0  10 10 12 04 84 04 01 21  41 60 39 47 aa e6 0f d5  |.......!A`9G....|
000001f0  1c e0 b6 7d 38 d5 7d 57  5e 3f 5f ee 95 39 55 c5  |...}8.}W^?_..9U.|
00000200  8a 04 01 21 41 40 48 10  10 12 04 84 04 01 21 41  |...!A@H.......!A|
00000210  40 48 10 38 b6 1f e9 b6  fd 3f 95 57 e6 5d 2b af  |@H.8.....?.W.]+.|
00000220  ef 43 3b c5 8a 04 01 21  41 40 48 10 10 12 04 84  |.C;....!A@H.....|
00000230  04 01 21 41 40 48 10 d8  7e 3f d2 6d f3 a2 53 e7  |..!A@H..~?.m..S.|
00000240  dd ed 9a 3e 5f ee 95 df  71 d7 2b ef 6b b2 22 41  |...>_...q.+.k."A|
00000250  40 48 10 10 12 04 84 04  01 21 41 40 48 10 10 12  |@H.......!A@H...|
00000260  04 96 fb 91 56 a6 ff 3d  fe d4 be 97 5d a7 e6 27  |....V..=....]..'|
00000270  a7 ce 15 9c be fe ea 3a  a7 7e 77 ef 47 82 03 84  |.......:.~w.G...|
00000280  04 01 21 41 40 48 10 10  12 04 84 04 01 21 41 60  |..!A@H.......!A`|
00000290  7b 8e 74 ea df f5 a7 f7  23 9d 3a 3f 6d fa 3d 51  |{.t.....#.:?m.=Q|
000002a0  a7 f6 29 bd f2 77 52 3d  8f 15 09 02 42 82 80 90  |..)..wR=....B...|
000002b0  20 20 24 08 08 09 02 42  82 80 90 20 90 ed 47 72  |  $....B... ..Gr|
000002c0  de 5d fb f9 57 ce 8b db  35 fd 3b 9e 9a 07 5a 91  |.]..W...5.;...Z.|
000002d0  20 20 24 08 08 09 02 42  82 80 90 20 20 24 08 08  |  $....B...  $..|
000002e0  09 02 d9 fb 91 76 dd 76  ae da b4 57 ce 97 ab ae  |.....v.v...W....|
000002f0  3f 3d c7 5b 99 3e 67 cf  b9 76 30 48 48 10 10 12  |?=.[.>g..v0HH...|
00000300  04 84 04 01 21 41 40 48  10 10 12 04 96 73 a4 db  |....!A@H.....s..|
00000310  de 4b b3 72 db 7b 72 aa  eb af 4c cf fd 4e 9d 83  |.K.r.{r...L..N..|
00000320  77 ea 79 2a 56 24 08 08  09 02 42 82 80 90 20 20  |w.y*V$....B...  |
00000330  24 08 08 09 02 42 82 c0  f8 fb 91 a6 f7 2f 4d 9f  |$....B......./M.|
00000340  17 77 db 7e 9b 95 53 e7  b9 ad 9c 7a cf d2 a9 39  |.w.~..S....z...9|
00000350  9b 15 09 02 42 82 80 90  20 20 24 08 08 09 02 42  |....B...  $....B|
00000360  82 80 90 20 b0 bd 1f 69  d7 eb 73 9b db f6 23 bd  |... ...i..s...#.|
00000370  ee b6 fd 54 bb f7 35 47  82 41 42 82 80 90 20 20  |...T..5G.AB...  |
00000380  24 08 08 09 02 42 82 80  90 20 b0 bd 1f e9 b6 73  |$....B... .....s|
00000390  e4 aa 39 cc f4 7b 75 2a  b7 9d 17 77 db f5 ab df  |..9..{u*...w....|
000003a0  71 f7 f3 56 24 08 08 09  02 42 82 80 90 20 20 24  |q..V$....B...  $|
000003b0  08 08 09 02 42 82 c0 72  8e 74 6a 1f d1 ca f4 9c  |....B..r.tj.....|
000003c0  e7 b6 f7 f0 ec 9e f3 56  5d ff 36 b7 9d 07 68 3f  |.......V].6...h?|
000003d0  12 0c 12 12 04 84 04 01  21 41 40 48 10 10 12 04  |........!A@H....|
000003e0  84 04 81 ed fd 48 2b d3  73 95 53 f7 3d f5 ff b5  |.....H+.s.S.=...|
000003f0  72 db 39 81 d5 7b 8d 56  a6 bf ff ea 3a 56 24 08  |r.9..{.V....:V$.|
00000400  08 09 02 42 82 80 90 20  20 24 08 08 09 02 42 82  |...B...  $....B.|
00000410  c0 72 8e 74 6a 1f d1 a9  fd 36 a7 9e f3 d4 3c 6a  |.r.tj....6....<j|
00000420  e5 b6 f9 58 75 9d ea f7  b5 1f 09 06 09 09 02 42  |...Xu..........B|
00000430  82 80 90 20 20 24 08 08  09 02 42 82 c0 f6 b9 76  |...  $....B....v|
00000440  2b b7 ed 1b 39 b5 8f a8  da b7 33 7d df 5d af ef  |+...9.....3}.]..|
00000450  37 9b fe 7e ac 48 10 10  12 04 84 04 01 21 41 40  |7..~.H.......!A@|
00000460  48 10 10 12 04 84 04 81  f1 fd 48 95 e9 e7 a9 ce  |H.........H.....|
00000470  79 db f5 ca 7e a7 e9 e7  dc 55 fd 5e ce b5 83 8b  |y...~....U.^....|
00000480  08 09 02 42 82 80 90 20  20 24 08 08 09 02 42 82  |...B...  $....B.|
00000490  c0 e7 b6 73 d5 2a b7 cd  c1 a6 9d 9a f3 54 e7 c2  |...s.*.......T..|
000004a0  ed 9a 9e fb 39 d7 0e 0e  10 12 04 84 04 01 21 41  |....9.........!A|
000004b0  40 48 10 10 12 04 84 04  81 67 f6 23 ad bc f2 5e  |@H.......g.#...^|
000004c0  9d ea 79 2a b7 cd 0f 5f  39 bf 6e c5 8a 04 01 21  |..y*..._9.n....!|
000004d0  41 40 48 10 10 12 04 84  04 01 21 41 40 48 10 58  |A@H.......!A@H.X|
000004e0  ce 91 56 4e cd 1f aa fd  27 d3 fb 58 5e 79 5f d0  |..VN....'..X^y_.|
000004f0  a9 ef 73 f7 fa 95 e9 eb  5b 91 20 20 24 08 08 09  |..s.....[.  $...|
00000500  02 42 82 80 90 20 20 24  08 08 09 02 db 73 a4 15  |.B...  $.....s..|
00000510  f3 84 7f 9d 7a cf d2 ae  53 fb 76 4e 5d 7f 7a ae  |....z...S.vN].z.|
00000520  68 45 82 80 90 20 20 24  08 08 09 02 42 82 80 90  |hE...  $....B...|
00000530  20 20 24 08 64 73 a4 57  4c ef c3 b9 ed bc b8 e9  |  $.ds.WL.......|
00000540  fd 54 af cf e5 aa f9 92  15 09 02 42 82 80 90 20  |.T.........B... |
00000550  20 24 08 08 09 02 42 82  80 90 20 f0 b5 73 a4 57  | $....B... ..s.W|
00000560  ce af db 9d 47 4d ef ab  b9 ed 7d 50 bb f7 3d f5  |....GM....}P..=.|
00000570  5e 2f 2b 12 04 84 04 01  21 41 40 48 10 10 12 04  |^/+.....!A@H....|
00000580  84 04 01 21 41 20 9b 23  bd b2 0f a7 9a 3f 54 73  |...!A .#.....?Ts|
00000590  98 db ce f1 bb 6d be b4  72 db 3e 31 2b 12 04 84  |.....m..r.>1+...|
000005a0  04 01 21 41 40 48 10 10  12 04 84 04 01 21 41 60  |..!A@H.......!A`|
000005b0  7b 8e 74 6a bf c7 ae e9  79 42 f5 3d 54 f3 ab e9  |{.tj....yB.=T...|
000005c0  7d 4a 2b af 5f 7f f7 be  de 8f 04 83 84 04 01 21  |}J+._..........!|
000005d0  41 40 48 10 10 12 04 84  04 01 21 41 e0 73 db 3e  |A@H.......!A.s.>|
000005e0  22 78 91 15 09 02 42 82  80 90 20 20 24 08 08 09  |"x....B...  $...|
000005f0  02 42 82 80 90 20 f0 0b  3d 2b 08 3b 89 af 07 b9  |.B... ..=+.;....|
00000600  00 00 00 00 49 45 4e 44  ae 42 60 82 37 7a bc af  |....IEND.B`.7z..|
00000610  27 1c 00 03 b8 64 d3 c1  1a 00 00 00 00 00 00 00  |'....d..........|
00000620  50 00 00 00 00 00 00 00  b5 6b 69 46 00 22 92 c6  |P........kiF."..|
00000630  ae 77 46 b4 23 6d f7 5d  c0 c0 a4 dc 1f a8 38 05  |.wF.#m.]......8.|
00000640  57 b9 76 3e 20 00 01 04  06 00 01 09 1a 00 07 0b  |W.v> ...........|
00000650  01 00 01 23 03 01 01 05  5d 00 00 01 00 0c 14 00  |...#....].......|
00000660  08 0a 01 dc e1 0d de 00  00 05 01 11 13 00 66 00  |..............f.|
00000670  6c 00 61 00 67 00 2e 00  74 00 78 00 74 00 00 00  |l.a.g...t.x.t...|
00000680  14 0a 01 00 90 d6 20 07  48 db cf 01 15 06 01 00  |...... .H.......|
00000690  20 00 00 00 00 00                                 | .....|
00000696
```

We see some suspicious data at the end that resembles "flag.txt." Perhaps this
PNG contains an archive? If so, then we should be able to find it by first
finding the end of the PNG file, and the beginning of an archive.

According to the PNG specification, a PNG is divided into chunks. Each chunk
contains four parts:
- Length (4 bytes): this is length of data
- Chunk Type (4 bytes): this is the type of data, and is in ASCII (ex: "IHDR")
- Chunk Data (n bytes): depends on Length; can be 0 bytes
- CRC (4 bytes): a Cyclic Redundancy Check

If we look at our PNG file, we see that the header "IEND" comes before some
additional data. "IEND" is the Chunk Type indicating the end of the PNG. It is
four bytes long. Its chunk data will be of 0-byte length, and its CRC will be
4 bytes. Therefore, the end of this chunk will be at 0x604 (start of Chunk
Type, or "I") + 8 = 0x60C. From there on, we have our data.

So, we write a simple C program to copy bytes from position 0x60C to EOF in
our image, over to a new file, which we will name "archive":

```C
#include <stdio.h>

int main(int argc, char *argv[])
{
	const long offset = 0x60CL;
	char buf[1024];
	FILE *fin = fopen("image", "r");
	FILE *archive = fopen("archive", "w");

	fseek(fin, offset, SEEK_SET);
	size_t nb;
	while ((nb=fread(buf, 1, sizeof(buf), fin)) > 0)
		fwrite(buf, nb, 1, archive);

	fclose(fin);
	fclose(archive);
	return 0;
}
``` 

We then see filetype:
```Bash
$ file archive
archive: 7-zip archive data, version 0.3
```

We then extract:
```Bash
$ 7z x archive
7-Zip [64] 9.20  Copyright (c) 1999-2010 Igor Pavlov  2010-11-18
p7zip Version 9.20 (locale=en_US.utf8,Utf16=on,HugeFiles=on,8 CPUs)

Processing archive: archive

Extracting  flag.txt

Everything is Ok

Size:       20
Compressed: 138
```

And we have our flag:
```Bash
$ cat flag.txt
EKSi7MktjOpvwesurw0v
```
