#include <stdio.h>
#include <string.h>
#include <ctype.h>
/**
*string_toupper - converts to uppercase
*
*@str: a string
*Return: a string
*/
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
}
	return (str);
}
