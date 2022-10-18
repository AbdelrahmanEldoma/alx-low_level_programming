#include <stdio.h>
/**
*print_sign - checks of if a number
*positive, negative or zero
*
*@n: a variable
*Return: returns 1,-1, or 0
*/
int print_sign(int n)
{
	if (n > 0)

{
	return (1);
	putchar('+');
}

	if (n < 0)

{
	return (-1);
	putchar('-');
}
	else
{
	return (0);
	putchar('0');
}
}
