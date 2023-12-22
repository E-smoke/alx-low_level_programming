#include "hash_tables.h"
/**
 * hash_table_get - returns the value for a key
 * @ht: table
 * @key: the key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
hash_node_t *current;
if (ht == NULL || key == NULL || key[0] == '\0')
{
return (NULL);
}
idx = key_index((const unsigned char *)key, ht->size);
if ((ht->array)[idx] == NULL)
{
return (NULL);
}
else
{
current = (ht->array)[idx];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return (current->value);
}
current = current->next;
}
}
return (NULL);
}

