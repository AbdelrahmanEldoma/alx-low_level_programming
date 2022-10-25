#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*print_rev - prints a string, in reverse, followed by a new line
*
*@s: a string
*Return: a void
*/

void print_rev(char *s)
{
	int i = strlen(s) - 1, j = 0;
	char ch;

	while (i > j)
{
	ch = s[i];
	s[i] = s[j];
	s[j] = ch;
	i--;
	j++;
}
	printf("%s", s);
}
