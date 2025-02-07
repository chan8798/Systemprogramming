#include <stdio.h>
#include <stdlib.h>
void errorfile(FILE* fp) {
	fclose(fp);
	char strPath[] = { "output.txt" };
	remove(strPath);
	printf("-->File creation failed");
	printf(" or--\n");
	printf("--->The existing file has been deleted.");
	exit(1);
}