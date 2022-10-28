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
	char *str2;
	for (int i = 0; str[i] != '\0' && str[i] != ' '; i++)
{
	str2[i] = toupper(str[i]);
}
	return (str2);
}
