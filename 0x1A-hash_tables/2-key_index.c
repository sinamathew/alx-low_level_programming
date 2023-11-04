#include "hash_tables.h"

/**
 * key_index - Gives the index of a key/value
 *      pair should be stored in array of a hash table.
 * @key: The key to give the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: The index of the key.
 * Description: Uses the djb2 algorithm.
 *
 * By: Sina Mathew
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
