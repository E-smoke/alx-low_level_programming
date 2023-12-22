#include "hash_tables.h"
/**
 * hash_table_print - prints the hash table like python dictionary
 * @ht: the table
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *ca;
char *append;
if (ht == NULL)
{
return;
}
else
{
printf("{");
append = "";
for (i = 0; i < ht->size; ++i)
{
ca = (ht->array)[i];
while(ca != NULL)
{
printf("%s\'%s\': \'%s\'", append, ca->key, ca->value);
append = ", ";
ca = ca->next;
}
}
printf("}\n");
}
}
