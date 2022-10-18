#include <stdio.h>
void print_alphabet(void);
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
