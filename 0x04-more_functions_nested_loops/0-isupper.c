#include <stdio.h>
#include <ctype.h>
/**
*_isupper - converts letter to upper case
*
*Return: upper case letter
*/
int _isupper(int c)
{
	if (isupper(c) == c)
	return (0);
	if (isupper(c) != c)
	return (1);
}
/**
*main - check the code.
*
*Return: Always 0.
*/
int main(void)
{
	char c;

	c = 'A';
	printf("%c: %d\n", c, _isupper(c));
	c = 'a';
	printf("%c: %d\n", c, _isupper(c));
	return (0);
}
