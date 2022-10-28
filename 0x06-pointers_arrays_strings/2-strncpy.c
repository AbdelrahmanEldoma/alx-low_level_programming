#include <stdio.h>

#include <string.h>
/**
**_strncpy - concatenates two strings
*
*@dest: a string
*@src: a string
*@n: an integer
* Return: a string pointer
*/
char *_strncpy(char *dest, char *src, int n)
{
	return strcpy(dest, src);
}
