#include "main.h"
/**
*_print_rev_recursion - the function used for recursion
*@s: a string
*
* return: a zero
*/
void _print_rev_recursion(char *s)
{
	if (*s != 0)
{
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
}
