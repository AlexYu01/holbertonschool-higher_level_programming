#include "lists.h"

/**
 * is_palindrome - The function determines if a single linked list containing
 * data(n) which stores integers, forms a palindrome. eg. 1, 3, 3, 1 is a
 * palindrome. 1, 3, 4 is not.
 *
 * @head: Double pointer to the head of the linked list.
 *
 * Return: 1 if the single linked list forms a palidrome of integers. 0
 * otherwise.
 */
int is_palindrome(listint_t **head)
{
	unsigned int len, mid, i, j;
	listint_t *center;
	listint_t *current;
	listint_t *back;

	if (head == NULL || *head == NULL)
		return (1);

	current = *head;
	len = 0;
	while (current != NULL)
	{
		current = current->next;
		len++;
	}
	mid = len / 2;
	center = *head;
	for (i = 0; i < mid; i++)
		center = center->next;
	current = *head;
	for (i = 0; i < mid; i++)
	{
		back = center;
		for (j = mid; j < len - i - 1; j++)
			back = back->next;
		if (current->n != back->n)
			return (0);
		current = current->next;
	}
	return (1);
}
