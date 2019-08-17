#include <stdio.h>

int count_letters(char *str)
{
	static int i = 0;
	int c = 0, j = 0;
	char *del = " \n\t\r\a";

	while(str[i])
	{
		j = 0;
		while(del[j])
		{
			if (str[i] == del[j])
			{
				i++;
				return(c);
			}
			j++;
		}
		c++;
		i++;

	}
	return (c);
}
/**
 * check_del - verify if char is a delimiter
 * @c: first character
 * @b: character before
 * Return: 1 if match 0 if not
 */
int check_del(char c, char b)
{
	int i;
	const char *del = " \t\r\a\0";

	for(i = 0; del[i]; i++)
	{
		if (del[i] == b)
			return (0);
		if (del[i] == c)
			return(1);
	}
	return (0);

}
/**
 * count_arg - count number of arguments
 * @str: strint to count
 * Return: number of arguments
 */
int count_arg(char *str)
{
	int i, c = 0;

	for (i = 0; str[i]; i++)
	{
		c += check_del(str[i], str[i - 1]);

	}
	if (str[i] == '\0')
	{
		if (str[i - 1] > 32 && str[i - 1] < 126)
			c++;

	}
	return (c);
}

int main(void)
{
	int a = 0, b;

	a = count_letters("hola mundo	como	s");

	printf("%d", a);
	b = count_letters("hola mundo	como	s");
	printf("%d", b);
	b = count_letters("hola mundo	como	s");
	printf("%d", b);
	b = count_letters("hola mundo	como	s");
	printf("%d", b);

	return (0);
}
