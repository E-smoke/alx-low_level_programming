#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash table with size @size
 * @size - size of the new hash table
 * Return - ptr to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_node_t **node_array;
hash_table_t *table;
node_array = (hash_node_t **)malloc(sizeof(hash_node_t *) * size);
if (node_array == NULL)
{
return (NULL);
}
table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
for (i = 0; i < size; ++i)
{
node_array[i] = NULL;
}
table->size = size;
table->array = node_array;
return (table);
}

