#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*_isupper - checks if a letter is upper case
*
*@c: a character
*Return: 0 and 1
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	return (1);
	else
	return (0);
}
