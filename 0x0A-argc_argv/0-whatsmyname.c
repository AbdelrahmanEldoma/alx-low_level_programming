#include <stdio.h>
#include "main.h"

/**
 *main - prints program name
 *@argc: the length of argv
 *@argv: the command line variables
 *Return: a zero
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
