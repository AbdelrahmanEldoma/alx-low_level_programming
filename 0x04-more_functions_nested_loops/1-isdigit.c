#include <stdio.h>
#include "main.h"
/**
*_isdigit- checks if a file is a digit
*
*@c: a character
*Return: 0 or 1
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	return (1);
	else
	return (0);
}
