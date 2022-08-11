#include "lists.h"

/**
 * add_node - Function to add new node at the beginning
 * @head: head of the list
 * @str: string data of the list to be added
 * Return: result
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * _strlen - function to calculate the length of a const char string
 * @s: string to work with
 * Return: length of string.
 */

int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
