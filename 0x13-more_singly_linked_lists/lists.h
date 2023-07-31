#ifndef _MORE_LINK_LISTS_
#define _MORE_LINK_LISTS_

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
	int a;
	struct listint_s *next;
} listint_t;
int _putchar(char c);
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
listint_t *add_nodeint(listint_t **head, const int a);
listint_t *add_nodeint_end(listint_t **head, const int a);
void free_listint(listint_t *head);
void free_listint2(listint_t **head);
int pop_listint(listint_t **head);
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
int sum_listint(listint_t *head);
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int a);
int delete_nodeint_at_index(listint_t **head, unsigned int index);
listint_t *reverse_listint(listint_t **head);

#endif