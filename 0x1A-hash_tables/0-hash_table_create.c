#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the table
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int j;


	if (!size)
		return NULL;

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return NULL;

	hash_table->array = malloc(size * sizeof(hash_node_s *));
	if (!hash_table->array)
	{
		free(hash_table);
		return NULL;
	}

	hash_table->size = size;
	for ( j = 0; j < size ; j++)
		hash_table->array[j] = NULL;

	return hash_table;
}
