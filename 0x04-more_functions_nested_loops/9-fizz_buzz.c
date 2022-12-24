#include <stdio.h>
#include "main.h"
/**
*main- prints the numbers from 1 to 100, followed by a new line
* But for multiples of three print Fizz instead of the number
* and for the multiples of five print Buzz.
* For numbers which are multiples of both three and five print FizzBuzz.
*
*Return: no return value
*/
void main()
{

	int i;

	for (i = 0; i <= 100; ++i)
{
	if(i % 3 == 0 && i % 5 != 0)
{
	printf("Fizz ");
}
	if(i % 3 != 0 && i % 5 == 0)
{
	printf("Buzz ");
}
	if(i % 3 == 0 && i % 5 == 0)
{
	printf("FizzBuzz ");
}
	if(i % 3 != 0 && i % 5 != 0)
		printf("%d ", i);
}
		_putchar('\n');
}
