#include <stdio.h>
/**
*main - prints the alphabet
*
*Return: returns a 0 value
*/
int main(void)
{
	char c = 97;

	while (c != 123)
{
	if (c != 101 && c != 113)
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
