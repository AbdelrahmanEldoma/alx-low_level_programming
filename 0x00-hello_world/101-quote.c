#include <stdio.h>
/**
*main - prints to the standard error
*
*Return: returns a 1 value
*/
int main(void)
{
	char str[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	 fprintf(stderr, "%s", str);
	return (1);
}
