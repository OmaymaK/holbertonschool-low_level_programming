#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table.
 * @size: hash table's size.
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *new_hash = NULL;

	if (size == 0)
		return (NULL);
	new_hash = calloc(1, sizeof(hash_table_t));
	if (new_hash == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	new_hash->array = calloc(size, sizeof(sigset_t *));
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_hash->array[i] = NULL;
	new_hash->size = size;
	return (new_hash);
}
