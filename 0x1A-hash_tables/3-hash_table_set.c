#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: Hash table.
 * @key: Is the key. Cannot be empty.
 * @value:Is the value associated with the key.
 * Returns: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *tmp;
	unsigned long int index;
	
	if (ht == NULL || key == NULL)
		return (0);
	
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		new_node = malloc(sizeof(hash_node_t *))
		if (!new_node)
			return (0);
		
		new_node->next = NULL;
		new_node->value = strdup(value);
		if (!new_node->value)
		{
			free(new_node);
			return (0);
		}
		
		new_node->key = key;
		return (1);
	}

	if (ht->array[index] != NULL)
	{
		tmp = ht->array[index];
		while(strcmp(tmp->key, key) != 0)
		{
			if (tmp->next != NULL)
			       tmp = tmp->next;
		}

		if (tmp->next != NULL)
		{
			tmp->value = strdup(value);
			if (!new_node->value)
			{
				free(new_node);
				return (0);
			}
			return (1);
		}

		else:
		{
			node = malloc(sizeof(hash_node_t *));
			if (!node)
			{
				free(node);
				return (0);
			}

			tmp->next = node;
			node->next = NULL;
			node->value = strdup(value);

			if(!node->value)
			{
				free(node);
				return (0);
			}
			return (1);
		}
	}
}
