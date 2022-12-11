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
	_putchar((char) n % 10);
	return (n % 10);
}
