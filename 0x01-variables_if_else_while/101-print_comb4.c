#include <stdio.h>
/**
*main - prints combinations of three digits
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
	int c3 = 48;

	while (c3 != 58)
	if (c1 < c2 && c2 < c3)
{
{
	putchar(c1);
	putchar(c2);
	putchar(c3);
	if (c1 + c2 + c3 != 168)
{
	putchar(',');
	putchar(' ');
}
}
	c3++;
}
	c2++;
}
	c1++
}
	putchar('\n');
	return (0);
}
