#include "lists.h"

/**
 * print_dlistint - prints the elements of a dlistint_t list
 * @h: pointer to the head node
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp = h;
	size_t size_nodes = 0;

	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		size_nodes += 1;
		tmp = tmp->next;
	}
	return (size_nodes);
}