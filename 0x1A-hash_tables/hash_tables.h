#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>

#define EQUAL 0
#define NODE_VALUE_MALLOC_ERROR 10
#define NODE_KEY_MALLOC_ERROR 11

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key string
 * The key is unique in the HashTable
 * @value: The value correspond to a key
 * @next: a pointer to next node of the list
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the head of a linked list,
 * because we want our HashTable to use a chaining  collision handling
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *, const char *, const char *);
char *hash_table_get(const hash_table_t *, const char *);
void hash_table_print(const hash_table_t *);
void hash_table_delete(hash_table_t *);

/* utility */
void free_node(hash_node_t *, int);

#endif
