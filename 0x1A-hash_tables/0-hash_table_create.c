#include <stdio.h>
#include <stdlib.h>

#define INITIAL_CAPACITY 10

/* Define structures */
typedef struct Node {
    unsigned long int key;
    /* Add your data structure here, for example: */
    /* int value; */
    struct Node *next;
} Node;

typedef struct HashTable {
    unsigned long int size;
    Node **array;
} hash_table_t;

/**
 * hash_table_create - Creates a hash table
 * @size: The size of the array
 *
 * Returns: A pointer to the newly created hash table, or NULL if an error occurs.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *new_table = malloc(sizeof(hash_table_t));

    if (new_table == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for hash table\n");
        return NULL;
    }

    new_table->size = size;

    new_table->array = malloc(size * sizeof(Node *));
    if (new_table->array == NULL) {
        fprintf(stderr, "Error: Unable to allocate memory for hash table array\n");
        free(new_table);
        return NULL;
    }

    for (unsigned long int i = 0; i < size; i++) {
        new_table->array[i] = NULL;
    }

    return new_table;
}

int main(void)
{
    unsigned long int size = INITIAL_CAPACITY;
    hash_table_t *my_hash_table = hash_table_create(size);

    if (my_hash_table == NULL) {
        fprintf(stderr, "Error: Hash table creation failed\n");
        return 1; // Return an error code
    }

    printf("Hash table created successfully!\n");

    // Add further operations as needed...

    free(my_hash_table->array);
    free(my_hash_table);

    return 0;
}

