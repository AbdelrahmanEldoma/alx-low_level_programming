#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main - prints the type of the integer
*
*Return: returns a 0 value
*/
int main(void)
{
	int n;
	 srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("is positive\n");
	if (n == 0)
		printf("is zero\n");
	if (n < 0)
		printf("is negative\n");
	return (0);

}
