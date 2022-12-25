#include <stdio.h>
#include <stdlib.h>
/**
 * main - will multiply numbers.
 * @argc: number of arguments.
 * @argv: array the number.
 * Return: return 0.
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	else
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}