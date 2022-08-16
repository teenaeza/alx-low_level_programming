#include "lists.h"
/**
 * sum_listint - calculates the sum
 * @head: a pointer to the head
 * Return: 0 or the sum of all
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
