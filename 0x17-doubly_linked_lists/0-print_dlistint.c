#include "lists.h"

/**
 * print_dlistint - fuction to print the list
 * @h: pointer to the head
 * Return: count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nbr_nodes = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		printf("%i\n", current->n);
		current = current->next;
		nbr_nodes++;
	}

	return (nbr_nodes);
}
