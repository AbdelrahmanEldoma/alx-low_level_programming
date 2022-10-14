#include <stdio.h>
/**
*main - prints numbers from 0 to 9
*
*Return: returns a 0 value
*/
int main(void)
{
	int num = 0;

	while (num != 10)
{
	printf("%d", num);
	num++;
}
	putchar('\n');
	return (0);
}
