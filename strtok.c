#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "hola, como, estas";
	char *t;

	t = strtok(s, ',');

	printf("%s", t);

	return (0);
}
