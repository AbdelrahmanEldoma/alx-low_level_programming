#include <stdio.h>
void times_table(void);
/**
*times_table - prints the 9 times table, starting with 0
*
*Return: no return value
*/

void times_table(void)
{
	int j, i;

	for (i = 0; i < 10; ++i)
{
	for (j = 0; j < 10; ++j)
{
	if (j != 9)
	printf("%d, ", i * j);
	if (j == 10)
	printf("%d", i * j);
}
	printf("\n");
}
}
