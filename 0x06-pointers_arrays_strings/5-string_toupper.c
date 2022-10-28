#include <stdio.h>
#include <ctype.h>
/**
*string_toupper - converts to uppercase
*
*@str: a string
*Return: a string
*/
char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0' && str[i] != ' '; i++)
{
	str[i] = toupper(str[i]);
}
	return (str);
}
