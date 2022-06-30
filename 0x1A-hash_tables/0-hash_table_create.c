#include "hash_tables.h"

int main()
{
	hash_table_t *hash_table_create(unsigned long int size)
	{
		hash_table_t *ptr = malloc(size * sizeof(hash_table_t));
		if (ptr == NULL)
			return NULL;
		return ptr;
	}
}
