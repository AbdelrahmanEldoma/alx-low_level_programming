#include <stdio.h>
/**
* main - prints the alphabet
*
*Return: returns a 0 value
*/
int main(void)
{
	char c = 123;

	while (c != 97)
{
	putchar(c);
	c--;
}

	putchar('\n');
	return (0);
}
