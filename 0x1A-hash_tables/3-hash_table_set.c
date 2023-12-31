#include "hash_tables.h"
/**
 * hash_table_set - set hash table like python dictionary
 * @ht: table
 * @key: key
 * @value: value
 * Return: 1 on success and 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int idx;
hash_node_t *new_item;
if (ht == NULL || key == NULL || key[0] == '\0')
{
return (0); }
new_item = (hash_node_t *)malloc(sizeof(hash_node_t));
if (new_item == NULL)
{
return (0); }
new_item->key = (char *)malloc(sizeof(char) * (strlen(key) + 1));
if (new_item->key == NULL)
{
free(new_item);
return (0); }
new_item->value = (char *)malloc(sizeof(char) * (strlen(value) + 1));
if (new_item->value == NULL)
{
free(new_item->key);
free(new_item);
return (0); }
idx = key_index((const unsigned char *)key, ht->size);
if ((ht->array)[idx] == NULL)
{
strcpy(new_item->key, key);
strcpy(new_item->value, value);
new_item->next = NULL;
(ht->array)[idx] = new_item; }
else
{
if (_while(ht, key, value, idx, new_item))
{
return (1); }
strcpy(new_item->key, key);
strcpy(new_item->value, value);
new_item->next = ((ht->array)[idx]);
(ht->array)[idx] = new_item; }
return (1); }
/**
 * _while - while loop
 * @ht: 1p
 * @key: 2p
 * @value: 3p
 * @idx: 5p
 * @new_item: 5p
 * Return: int
 */
int _while(hash_table_t *ht, const char *key, const char *value, unsigned long int idx, hash_node_t *new_item)
{
hash_node_t *current;
hash_node_t *prev;
current = (ht->array)[idx];
prev = current;
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
strcpy(new_item->key, key);
strcpy(new_item->value, value);
new_item->next = current->next;
if (prev == current)
{
(ht->array)[idx] = new_item; }
else
{
prev->next = new_item; }
free(current->key);
free(current->value);
free(current);
return (1); }
prev = current;
current = current->next; }
return (0);
}
