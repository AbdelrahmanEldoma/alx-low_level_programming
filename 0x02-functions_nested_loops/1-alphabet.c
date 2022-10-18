#include <stdio.h>
#include "main.h"
void print_alphabet(void);
/**
*main - class another function
*
*Return: returns a 0 value
*/
int main(void)
{
	print_alphabet();
	return (0);
}
/**
*print_alphabet - prints thr alphabet
*
*Return: returns a 0 value
*/
void print_alphabet(void)
{
	for (int i = 97; i < 123; ++i)

{
	putchar(i);
}
	putchar(10);
}
