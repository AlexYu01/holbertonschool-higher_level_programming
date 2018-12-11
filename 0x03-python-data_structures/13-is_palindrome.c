#include "lists.h"

listint_t *add_nodeint(listint_t **head, const int n);

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
	unsigned int mid, i;
	listint_t *current;
	listint_t *tail;
	listint_t *back;

	if (head == NULL || *head == NULL)
		return (1);

	current = *head;
	mid = 0;
	tail = NULL;
	while (current != NULL)
	{
		current = current->next;
		mid++;
	}
	mid /= 2;
	current = *head;
	for (i = 0; i < mid; i++)
		current = current->next;
	while (current)
	{
		add_nodeint(&tail, current->n);
		current = current->next;
	}
	back = tail;
	current = *head;
	for (i = 0; i < mid; i++)
	{
		if (current->n != tail->n)
		{
			free_listint(back);
			return (0);
		}
		current = current->next;
		tail = tail->next;
	}
	return (1);
}

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer of the start of the list
 * @n: integer to be included in node
 * Return: address of the new element or NULL if it fails
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
