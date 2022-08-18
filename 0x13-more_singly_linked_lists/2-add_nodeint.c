#include "lists.h"
/**
 * add_nodeint - adds a new node
 * @head: a pointer to the address of the head
 * @n: the integer for the new node to contain
 * Return: null or the address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}