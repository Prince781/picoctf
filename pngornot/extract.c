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
