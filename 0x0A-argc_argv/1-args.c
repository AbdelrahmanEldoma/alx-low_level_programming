#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the number of arguments
 * @argc: the number of arguements
 * @argv: an array of strings
 * Return: return 0
 */

int main(int argc, char* argv[])
{
	int i = 0;

	while (i < argc)
{
	printf("No of Arguments: %d, Name: %s\n", argc, argv[i]);
	i++;
}
	return (0);
}