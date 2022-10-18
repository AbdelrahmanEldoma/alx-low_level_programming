#include <stdio.h>
int _isalpha(int c);
/**
*_isalpha - checks of if a character
*is lower or uppercase
*
*@c: a variable
*
*Return: returna 0 or 1
*/
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	return (1);

	if (c >= 65 && c <= 80)
	return (1);

	else
	return (0);
}
