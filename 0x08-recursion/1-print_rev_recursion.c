#include "main.h"
/**
*_print_rev_recursion - the function used for recursion
*@s: a string
*
* Return: a zero
*/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
{
	_print_rev_recursion(s + 1);
	putchar(*s);
}
}
