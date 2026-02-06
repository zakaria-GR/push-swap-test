#include "../push_swap.h"

void    sort_big(t_list **A, t_list **B)
{
    int chunk;
    int index;
    t_list  *temp;
    
    chunk = get_chunk(*A);
    temp = *A;
    while (ft_lstsize(*A) > 3)
    {
        while (temp)
        {
            if (temp->index < chunk)
            {
                index = check_index(*A, temp->value);
                move_to_top(A, index);
                push(A, B);
                printf("pa\n");
            }
            temp = temp->next;
        }
        chunk += chunk;
        printf("chunk ->%d\n", chunk);
        temp = *A;
    }
    sort_3(A);
    push_back(A, B);
}
