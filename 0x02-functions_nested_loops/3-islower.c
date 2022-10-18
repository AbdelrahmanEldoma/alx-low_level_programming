#include <stdio.h>
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
