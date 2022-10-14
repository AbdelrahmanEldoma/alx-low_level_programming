#include <stdio.h>
/**
*main - prints hexadecimal  numbers
*
*Return: returns a 0 value
*/
int main(void)
{
	int c = 48;

	while (c != 58)
{
	putchar(c);
	c++;
}
	c = 97;

	while (c != 103)
{
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
