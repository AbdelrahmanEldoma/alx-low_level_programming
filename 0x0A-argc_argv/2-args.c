#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argc: the number of arguments
 * @argv: an array of strings
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
{
	printf("%s\n", argv[i]);
	i++;
}
	return (0);
}
