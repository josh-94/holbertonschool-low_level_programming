#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 * Return: a pointer to the newly created hash table.
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hashtable;
	unsigned long int i = 0;

	new_hashtable = malloc(sizeof(hash_table_t));
	if (new_hashtable == NULL)
		return (NULL);
	new_hashtable->size = size;
	new_hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (new_hashtable->array == NULL)
	{
		free(new_hashtable);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_hashtable->array[i] = NULL;
	return (new_hashtable);


}

