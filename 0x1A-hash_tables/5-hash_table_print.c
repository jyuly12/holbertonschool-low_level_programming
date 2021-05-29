#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: Is the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
        unsigned int i = 0, index = 0;
        hash_node_t *node;

        if (!ht)
                return;

        printf("{");

        for (; index < ht->size; index++)
        {
                node = ht->array[index];
                while (node != NULL)
                {
                        if (i != 0)
                                printf(", ");
                        printf("'%s': '%s'", node->key, node->value);
                        node = node->next;
                        i++;
                }
        }
        printf("}\n");
}