#include "main.h"
/**
*_strlen_recursion- the function used for recursion
*@s: a string
*
* Return: length of string or zero
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
{
		return (0);
}
	else
	return (1 + _strlen_recursion(s + 1));
}
