#include <stdio.h>
void times_table(void);
/**
*times_table - prints the 9 times table, starting with 0
*
*Return: no return value
*/

void times_table(void)
{
	for (int i = 0; i < 10; ++i)
{
	for (int j = 0; j < 10; ++j)
{
	if (j != 9)
	printf("%d, ", i*j);
	if (j = 10)
	printf("%d", i*j);
}
	printf("\n");
}
}
