#include "main.h"
/**
*_memset - fills with a constant byte
*
*@s: a pointer
*@n: a number
*@b: a char
*
*Return: pointer to the memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
{
	s[i] = b;
}
	return (s);
}
