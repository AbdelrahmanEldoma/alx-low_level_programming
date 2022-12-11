#include "main.h"
int print_last_digit(int);
/**
*print_last_digit - prints last digit of a number
*
*@n: a variable
*Return: returns mod of n
*/
int print_last_digit(int n)
{
	if (n < 0)
		n = n + 1000 * -1;
	_putchar('0' + n % 10);
	return (n % 10);
}
