#include "../push_swap.h"

void    (t_list **A)
{
    int     index;
    t_list  *temp;
    int     value;

    index = 0;
    temp = A;
    while(index < ft_lstsize(A))
    {
        value = temp->value;
        if (temp->value < temp->next->value)
            temp->index = index++;

    }
}