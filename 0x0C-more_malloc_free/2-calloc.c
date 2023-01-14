#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of elements in array
 * @size: size of each element in bytes
 *
 * Description: allocates memory for an array of "nmemb" elements
 * of "size" bytes each and sets the memory to zero.
 * if "nmemb" or "size" is 0, it returns "NULL".
 *
 * Return: pointer to allocated memory (on success),
 * "NULL" (on failure).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);

	for (; i < nmemb; i++)
		*((char *) mem + i) = 0;

	return (mem);
}