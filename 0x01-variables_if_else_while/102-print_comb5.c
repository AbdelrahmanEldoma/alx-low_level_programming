#include <stdio.h>
/**
*main - prints combinations of two two-digit numbers
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
{
	int c4 = 48;

	while (c4 != 58)
{
	if (c3 + c4 > c1 + c2)
{
	putchar(c1);
	putchar(c2);
	putchar(' ');
	putchar(c3);
	putchar(c4);
	if (c1 + c2 + c3 + c4 != 227 && c3 + c4 > c1 + c2)
{
	putchar(',');
	putchar(' ');
}
}
	c4++;
}
	c3++;
}
	c2++;
}
	c1++;
}
	putchar('\n');
	return (0);

}
