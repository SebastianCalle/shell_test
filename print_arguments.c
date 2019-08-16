#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; argv[i] != NULL; i++)
	{
		printf("%s", argv[i]);
		if (argv[i+1] != NULL)
			printf(" ");
	}
	printf("\n");


	return (argc);
}
