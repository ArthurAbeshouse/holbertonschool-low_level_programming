#include "hash_tables.h"

/**
 * hash_table_print - prints the elements of a hash table
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int flag = 0;
	hash_node_t *node;

	if (ht == NULL)
		return;
	printf("{");
	if (ht->array == NULL)
	{
		printf("}\n");
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag++;
			node = node->next;
		}
	}
	printf("}\n");
}
