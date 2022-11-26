#include <stdio.h>
/**
*_puts_recursion - prints string with recursion
*@s: a string
*/

	void _puts_recursion(char *s)
{
	if (*s == '\0')
{
	return;
}
	_putchar(*s);
	_puts_recursion(s + 1);
}
