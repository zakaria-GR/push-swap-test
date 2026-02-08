#include "../push_swap.h"

void    pb(t_list **stack1, t_list **stack2)
{
    t_list *B_head;
    t_list *A_head;
    t_list *temp;

    B_head = *stack1;
    A_head = *stack2;
    temp = B_head->next;
    *stack1 = temp;
    B_head->next = A_head;
    *stack2 = B_head;
    printf("pb\n");
}
