#include "../push_swap.h"

void    rb(t_list **stack)
{
    t_list *head;
    t_list *firstnode;

    head = *stack;
    firstnode = *stack;
    while (firstnode->next != NULL)
    {
        firstnode = firstnode->next;
    }
    firstnode->next = head;
    *stack = head->next;
    head->next = NULL;
    printf("rb\n");
}