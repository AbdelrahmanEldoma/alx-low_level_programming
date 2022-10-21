#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*_isupper - converts letter to upper case
*
*@c: a character
*Return: upper case letter
*/
int _isupper(int c)
{
	if (isupper(c) == c)
	return (0);
	if (isupper(c) != c)
	return (isupper(c));
}
