#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of array
 *
 * Return: pointer to hash table created
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *HT;

	HT = malloc(sizeof(hash_table_t));

	if (HT == NULL)
	{
		return (NULL);
	}
	else
	{
		HT->size = size;
		HT->array = malloc(sizeof(hash_node_t *) * size);
		if (HT == NULL)
		{
			return (NULL);
		}

		for (i = 0; i <= size; i++)
		{
			HT->array[i] = NULL;
		}
	}
	return (HT);
}
