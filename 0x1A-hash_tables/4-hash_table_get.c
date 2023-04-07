#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: A pointer to the hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: value associated with key, or NULL if key cannot be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	if (item == NULL)
		return (NULL);

	while (item != NULL)
	{
		if (strcmp(item->key, key) == 0) /* found the key */
			return (item->value);
		item = item->next;
	}
}
