#include "hash_tables.h"
/**
* hash_table_set - Adds an element to the hash table.
* @key: Is the hash table key.
* @ht: Is the hash table you want to add or update the key/value.
* @value: is the value associated with the key.
*
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    char *tmp;
    hash_node_t *new_node;
    unsigned long int index;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);
    tmp = strdup(value);
	
    if (tmp == NULL)
		return (0);

    index = key_index((const unsigned char *)key, ht->size);

	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = tmp;
			return (1);
        }
        index++;
    }

    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
	    free(tmp);
	    return (0);
    }
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }
    new_node->next = NULL;
    new_node->next = ht->array[index];
    ht->array[index] = new_node;
    return (1);
}