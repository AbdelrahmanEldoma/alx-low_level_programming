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
	s = rev_string(s);
	puts(s);
}
