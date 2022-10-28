#include <stdio.h>
#include <string.h>
/**
* *_strncat - concatenates two strings
*
*@dest: a string
*@src: a string
*@n: an integer
*Return: a string pointer
*/
char *_strncat(char *dest, char *src, int n)
{
	return (strcat_s(dest, n, src));
}
