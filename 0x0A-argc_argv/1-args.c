#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments
 * @argc: the number of arguments
 * @argv: an array of strings
 * Return: return 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
