#include "lists.h"
#include <stdio.h>

int recursive(listint_t **head, listint_t *tail);

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
	unsigned int len, mid, i;
	listint_t *center;
	listint_t *current;

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
	return (recursive(&current, center));
}

/**
 * recursive - a recursive helper function where head begins at the start of
 * the singly linked list and tail begins at the center. Base case is when tail
 * reaches the end of the linked list and we begin checking the first and last
 * nodes, and work towards the center.
 *
 * @head: Double pointer to the head, needs to be able to change as call stacks
 * are popped.
 * @tail: Pointer to the center of the singly linked list during first call.
 *
 * Return: 1 if the singly linked list is a palindrome, 0 otherwise.
 */
int recursive(listint_t **head, listint_t *tail)
{
	int previous;

	if (tail->next)
	{
		previous = recursive(head, tail->next);
		if (previous == 0)
			return (0);
		if ((*head)->n != tail->n)
		{
			return (0);
		}
		else
		{
			*head = (*head)->next;
			return (1);
		}
	}
	if ((*head)->n != tail->n)
	{
		return (0);
	}
	else
	{
		*head = (*head)->next;
		return (1);
	}
}
