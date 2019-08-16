#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFFER 1024

int main(void)
{
	int c, i = 0,f = 1;
	int bufsize = BUFFER;
	char *s = malloc(sizeof(char) * bufsize);

	if (!s)
	{
		fprintf(stderr, "s: allocation error\n");
		exit(EXIT_FAILURE);
	}
	printf("$ ");

	while (f)
	{
		c = getchar();
		if (c == EOF || c == '\n')
		{
			s[i] = '\0';
			f = 0;
		}
		else
			s[i] = c;
		i++;
		if (i >= bufsize)
		{
			bufsize += BUFFER;
			s = realloc(s, bufsize);
			if (!s)
			{
				fprintf(stderr, "s: allocation error\n");
				exit(EXIT_FAILURE);
			}
		}
	}
	write(1, s, i);
	return (0);
}
