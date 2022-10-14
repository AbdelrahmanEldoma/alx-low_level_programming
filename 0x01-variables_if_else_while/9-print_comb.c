#include <stdio.h>
/**
*main - prints numbers from 0 to 9
*
*Return: returns a 0 value
*/
int main(void)
{
	int c = 48;

	while (c != 58)
{
	if (c != 57)
{
	putchar(c);
	putchar(',');
	putchar(' ');
}
	c++;
}
	putchar('\n');
	return (0);
}
