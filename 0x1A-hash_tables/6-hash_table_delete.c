#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 * @ht: A pointer to a hash table.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *item, *temp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			item = ht->array[i];
			while (item != NULL)
			{
				temp = item->next;
				free(item->key);
				free(item->value);
				free(item);
				item = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
