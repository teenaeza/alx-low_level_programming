#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: a pointer to the address
 * Return: 0 or the head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
