#include "hash_tables.h"

int main(void)
{
hash_table_t *ht;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "ama");
    hash_table_set(ht, "mentioner", "ama");
    return (EXIT_SUCCESS);
}
