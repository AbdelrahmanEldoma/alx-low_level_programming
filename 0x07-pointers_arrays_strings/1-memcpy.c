#include "main.h"
/**
*_memcpy - copies memory
*
*@dest: where to copy the memory to
*@n: the number of bytes
*@src: the memory area to copy from
*
* Return: a pointer
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	dest[i] = src[i];
}
	return (dest);
}