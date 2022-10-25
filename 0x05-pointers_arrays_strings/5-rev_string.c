#include <stdio.h>
#include <string.h>
#include "main.h"

/**
*rev_string - reverse a string
*
*@s: a string
*Return: a void
*/

void rev_string(char *s)
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
}
