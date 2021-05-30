#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *next, *tmp;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		tmp = ht->array[i];
		while (tmp != NULL)
		{
			next = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = next;
		}
	}

	free(ht->array);
	free(ht);
}
