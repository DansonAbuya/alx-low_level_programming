#ifndef _MYLINKEDLIST_
#define _MYLINKEDLIST_

/**
 * struct list_s - definition of the singly linked list
 * @str: string 
 * @lenth: length of the string
 * @next_node: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int lenth;
	struct list_s *next_node;
} list_t;

int _strlen(const char *s);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
