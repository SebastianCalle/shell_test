#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *_strtok(const *str, const char *delim);
typedef node_s {
	char *s;
	struct node_s *next;
} node_t;
#endif
