#include <stdio.h>
int _islower(int c);
/**
*main - calls another function
*
*Return: returns a 0 value
*/
int main(void)
{
	int r;

        r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}
/**
*_islower - checks if a character is lower case
*
*Return: returns a 0 value
*/
int _islower(int c)
{
if(c >= 97 && c <= 122)
return (1);
else return (0);
}
