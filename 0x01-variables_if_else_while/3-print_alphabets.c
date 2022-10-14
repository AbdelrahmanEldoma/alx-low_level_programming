#include <stdio.h>
/**
* main - prints the alphabet twice
*
* Return: returns a 0 value
*/
int main(void)
{
	char c = 97;

	while (c != 123)
{
	putchar(c);
	c++;
}
	c = 65;

	while (c != 91)
{
	putchar(c);
	c++;
}
	putchar('\n');
	return (0);
}
