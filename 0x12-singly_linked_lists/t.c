#include "lists.h"
#include "2-add_node.c"
#include "1-list_len.c"
#include "0-print_list.c"
#include "3-add_node_end.c"
#include "4-free_list.c"
#include <string.h>

int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main()
{
 list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
return (0);
}
