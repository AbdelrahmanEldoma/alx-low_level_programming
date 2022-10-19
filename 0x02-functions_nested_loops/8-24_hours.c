#include <stdio.h>
void jack_bauer(void);
/**
*jack_bauer - prints every minute of the day of
* Jack Bauer, starting from 00:00 to 23:59
*
*Return: no return value
*/
void jack_bauer(void)
{
	for (int i = 0; i < 24; ++i)
{
	for (int j = 0; j < 60; ++j)
{
	if (i >= 10 && j < 10)
{
	printf("%d:0%d\n", i, j);
}
	if (j >= 10 && i < 10)
{
	printf("0%d:%d\n", i, j);
}
	if (i < 10 && j < 10)
{
	printf("0%d:0%d\n", i, j);
}
	if (i >= 10 && j >= 10)
{
	printf("%d:%d\n", i, j);
}
}
}
}
