#include <stdio.h>
/**
*Myrec - the function used for recursion
*_puts_recursion - prints string with recursion
*@s: a string
*@x: an intger
*/
void Myrec(char *s, int x)
{
if (s[x] == '\0')
	return;

	printf("%c", s[x]);
	Myrec(s, x + 1);
}
	void _puts_recursion(char *s)
{
	Myrec(s, 0);
}
