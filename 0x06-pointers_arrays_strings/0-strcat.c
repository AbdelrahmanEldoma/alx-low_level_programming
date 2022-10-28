#include <stdio.h>
#include <string.h>
/**
* *_strcat - appends the src string to the dest string,
* overwriting the terminating null byte (\0) at the end of dest,
* and then adds a terminating null byte
*
* @dest: a string
* @src: a string
* Return: a string pointer
*/
char *_strcat(char *dest, char *src)
{
	return (strcat(dest, src));
}
