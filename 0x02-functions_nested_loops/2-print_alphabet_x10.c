#include <stdio.h>
#include "main.h"
void print_alphabet_x10(void);
/**
*main - calls another function
*
*Return: returns a 0 value
*/
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
*print_alphabet_x10 - prints the alphabet 10 times
*
*Return: returns a 0 value
*/
void print_alphabet_x10(void)
{
	int c = 0;

	while (c < 10)
{
	for (int i = 97; i < 123; ++i)
{
	putchar(i);
}
	putchar(10);
	c++;
}
}
