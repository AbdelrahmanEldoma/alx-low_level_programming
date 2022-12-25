#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
 * main - Prints the number of coins
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: return 0 or 1
 */

int main(int argc, char *argv[])
{
	int cents, coins = 0;

	if (argc != 2)
{
	printf("Error\n");
	return (1);
}
	cents = atoi(argv[1]);
	while (cents > 0)
{
		coins++;
		if ((cents - 25) >= 0)
{
	cents -= 25;
	continue;
}
	if ((cents - 10) >= 0)
{
	cents -= 10;
	continue;
}
	if ((cents - 5) >= 0)
{
	cents -= 5;
	continue;
}
		if ((cents - 2) >= 0)
{
	cents -= 2;
	continue;
}
	cents--;
}
	printf("%d\n", coins);
	return (0);
}
