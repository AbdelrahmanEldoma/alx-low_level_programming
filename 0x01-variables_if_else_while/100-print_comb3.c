#include <stdio.h>
/**
*main - prints combinations of two digits
*
*Return: returns a 0 value
*/
int main(void)
{
	int c1 = 48;

	while (c1 != 58)
{
	int c2 = 48;

	while (c2 != 58)
{

	if (c1 < c2)
{
	putchar(c1);
	putchar(c2);
	if (c1 + c2 != 113)
{
	putchar(',');
	putchar(' ');
}
}
	c2++;
}
	c1++
}
	putchar('\n');
	return (0);
}
