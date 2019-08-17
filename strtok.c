#include "shell.h"
/**
 * _strtok - split the string in tokens
 * @str: string to split
 * @delim: character delimitator
 * Return: linked list
 */
char *_strtok(char *s, const char *delim, int arg)
{
    static char *lasts;
    register int ch;

    if (s == 0)
	s = lasts;
    do {
	if ((ch = *s++) == '\0')
	    return 0;
    } while (strchr(delim, ch));
    --s;
    lasts = s + strcspn(s, delim);
    if (*lasts != 0)
	*lasts++ = 0;
    return s;
}
