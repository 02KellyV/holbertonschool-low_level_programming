#include "hash_tables.h"

/*
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *h_table;

	if (size < 1)
		return (NULL);

	if ((h_table = malloc(sizeof(hash_table_t))) == NULL)
		return (NULL);

	if((h_table->array = malloc(sizeof(hash_node_t *) * size)) == NULL)
		return (NULL);

	for(unsigned long int i = 0; i < size; i++)
	{
		h_table->array[i] = NULL;
	}

	h_table->size = size;
	return h_table;
}
