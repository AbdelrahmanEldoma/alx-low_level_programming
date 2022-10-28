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
	int i1 = 0;
	int i2 = 0;

	while (dest[i1] != '\0')
{
	i1++;
}
	while (i2 < n && src[i2] != '\0')

	dest[i1 + i2] = src[i2];
	i2++;
}
	dest[i1 + i2] = '\0';
	return (dest);
}
