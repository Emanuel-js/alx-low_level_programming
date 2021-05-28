#include "hash_tables.h"
/**
 * hash_table_delete - delete hashtable
 * @ht: is a hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current, *tmp;
	unsigned long int i;

	if (ht != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			current = ht->array[i];
			while (current != NULL)
			{
				tmp = current;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				current = current->next;
			}
		}
		free(ht->array);
		free(ht);
	}
}
