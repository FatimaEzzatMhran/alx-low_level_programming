#include "hash_tables.h"
/**
 * hash_table_set - adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to
 * @key: key to add - can't be an empty string
 * @value: the value associated with the key.
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_item, *item;
	unsigned long int index;
	char *value_copy;
	char *key_copy;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	value_copy = strdup(value);
	key_copy = strdup(key);
	item = ht->array[index];
	if (item != NULL) /* key exists */
	{
		while (item)
		{
			if (strcmp(item->key, key) == 0) /* update the value */
			{
				free(ht->array[index]->value);
				item->value = value_copy;
				return (1); /* success */
			}
			item = item->next;
		}
	}
	new_item = malloc(sizeof(hash_node_t)); /* new item */
	if  (new_item == NULL)
	{
		free(value_copy);
		return (0); /* fail */
	}
	new_item->key = key_copy;
	new_item->value = value_copy;
	if (new_item->key == NULL)
	{
		free(new_item);
		return (0);
	}
	new_item->next = NULL;
	if (ht->array[index] != NULL)
		new_item->next = ht->array[index];
	ht->array[index] = new_item;
	return (1); /* success */
}
