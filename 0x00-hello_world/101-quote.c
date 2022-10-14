#include <stdio.h>
/**
*main - prints to the standard error
*
*Return: returns a 1 value
*/
int main(void)
{
	char s[60] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	 fprintf(stderr, "%s", s);
	return (1);
}
