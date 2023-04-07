#include <stdio.h>

/**
 * key_index - Gives the index of a key and where it should be
 *             stored in the array of the hash table.
 * @key: key to get index for
 * @size: size of array of the hash table
 * Return: index where key/value pair should be stored in the
 *         array of hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
