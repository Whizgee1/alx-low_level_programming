#include "hash_tables.h"

/**
 * shash_table_create - creates a shash table with a given size
 *
 * @size: size of the shash table
 * Return: the created shash table, or NULL if function fails
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_n_shash - adds a node at the beginning of a shash at a given index
 *
 * @h: head of the shash linked list
 * @key: key of the shash
 * @value: value to store
 * Return: created node
 */
shash_node_t *add_n_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *tmp;

	tmp = *h;

	while (tmp != NULL)
	{
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (tmp);
		}
		tmp = tmp->next;
	}

	tmp = malloc(sizeof(shash_node_t));

	if (tmp == NULL)
		return (NULL);

	tmp->key = strdup(key);
	tmp->value = strdup(value);
	tmp->next = *h;

	*h = tmp;

	return (tmp);
}

/**
 * add_i_shash - adds a node on the DLL of the shash table
 *
 * @ht: pointer to the table
 * @new: new node to add
 * Return: no return
 */
void add_i_shash(shash_table_t *ht, shash_node_t *new)
{
	shash_node_t *tmp1, *tmp2;
	int ret;

	tmp1 = tmp2 = ht->shead;

	while (tmp1 != NULL)
	{
		ret = strcmp(new->key, tmp1->key);
		if (ret == 0)
		{
			return;
		}
		else if (ret < 0)
		{
			new->sprev = tmp1->sprev;

			if (tmp1->sprev)
				tmp1->sprev->snext = new;
			else
				ht->shead = new;

			tmp1->sprev = new;
			new->snext = tmp1;

			return;
		}
		tmp2 = tmp1;
		tmp1 = tmp1->snext;
	}

	new->sprev = tmp2;
	new->snext = NULL;

	if (ht->shead)
		tmp2->snext = new;
	else
		ht->shead = new;

	ht->stail = new;
}

/**
 * shash_table_set - adds a hash (key, value) to a given shash table
 *
 * @ht: pointer to the shash table
 * @key: key of the shash
 * @value: value to store
 * Return: 1 if successes, 0 if fails
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{

