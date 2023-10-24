#include "lists.h"
#include "0-print_listint.c"
#include "1-listint_len.c"
#include "2-add_nodeint.c"
#include "3-add_nodeint_end.c"
#include "4-free_listint.c"
#include "5-free_listint2.c"
#include "6-pop_listint.c"
#include "7-get_nodeint.c"
#include "8-sum_listint.c"
int main()
{
 listint_t *head;
    int sum;

    head = NULL;
    add_nodeint_end(&head, 0);
    add_nodeint_end(&head, 1);
    add_nodeint_end(&head, 2);
    add_nodeint_end(&head, 3);
    add_nodeint_end(&head, 4);
    add_nodeint_end(&head, 98);
    add_nodeint_end(&head, 402);
    add_nodeint_end(&head, 1024);
    sum = sum_listint(head);
    printf("sum = %d\n", sum);
    free_listint2(&head);

return (0);
}
