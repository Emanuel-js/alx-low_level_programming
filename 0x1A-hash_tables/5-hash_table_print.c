#include "hash_tables.h"
/**
 * hash_table_print - function
 * @ht: is a hash table
 * Return: key\value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i, flag = 0;

	if (ht != NULL)
	{
		printf("{");
		for (i = 0; i <= ht->size; i++)
		{
			current = ht->array[i];

			while (current != NULL)
			{
				if (current->key)
				{
					flag++;
					if (flag == 1)
						printf("\'%s\': \'%s\'", current->key, current->value);
					else
						printf(", \'%s\': \'%s\'", current->key, current->value);
				}
				current = current->next;
			}
		}
		printf("}\n");
	}
}
