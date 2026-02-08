#include "../push_swap.h"

void    rrb(t_list **stack)
{
    t_list *head;
    t_list *lastnode;

    head = *stack;
    lastnode = *stack;
    while(lastnode->next != NULL)
    {
        lastnode = lastnode->next;
    }
    *stack = lastnode;
    lastnode->next = head;
    while(head->next != lastnode)
    {
        head = head->next;
    }
    head->next = NULL;
    printf("rrb\n");
}
