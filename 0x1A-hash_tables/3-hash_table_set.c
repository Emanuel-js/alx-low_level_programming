#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: hash table you want to add or update the key/value
 * @key: is a key
 * @value: is a value
 * Return: 1 success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *current, *new_node;
	unsigned long int idx;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL  || new_node->value == NULL)
		return (0);
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}
