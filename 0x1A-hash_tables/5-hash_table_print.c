#include "hash_tables.h"

/**
 * hash_table_print - prits a hash table.
 * @ht: hash table, if NULL don't print anything
 * Return: void
 * Description: print the key/value in the order
 *              that they appear in the array of hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *item;
	unsigned char flag = 0; /* no data has been printed so far */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		item = ht->array[i];
		while (item != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", item->key, item->value);
			flag = 1;
			item = item->next;
		}
	}
	printf("}\n");
}
