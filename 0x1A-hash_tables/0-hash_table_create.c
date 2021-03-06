#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: a pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable = NULL;

	if (size <= 0)
		return (NULL);
	new_hashtable = malloc(sizeof(hash_table_t) * 1);
	if (new_hashtable == NULL)
		return (NULL);
	new_hashtable->size = size;
	new_hashtable->array = calloc(size, sizeof(hash_node_t *));
	if (new_hashtable->array == NULL)
	{
		free(new_hashtable);
		return (NULL);
	}
	return (new_hashtable);
}
