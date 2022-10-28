#include <stdio.h>
#include <ctype.h>
/**
*_strcmp - concatenates two strings
*
*@s1: a string
*@s1: a string
*Return: an integer
*/
char *string_toupper(char *str)
{
	for (int i = 0; str[i] != '\0'; i++)
{
	str[i] = toupper(str[i]);
}
	return (str);
}
