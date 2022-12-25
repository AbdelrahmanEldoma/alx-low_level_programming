#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - will add numbers
* @argc: number of arguments
* @argv: array the number
* Return: return 0 or 1
*/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum = 0;

	for (i = 1; i < argc; i++)
{
	for (j = 0; argv[i][j] != '\0'; j++)
{
	if (!isdigit(argv[i][j]))
{
	printf("Error\n");
	return (1);
}
}
	sum = sum + atoi(argv[i]);
}
	printf("%d\n", sum);
	return (0);
}
