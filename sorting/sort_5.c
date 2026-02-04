#include "../push_swap.h"

void	sort_5(t_list **A, t_list **B)
{
    int index;

    push(B, A);
    push(B, A);
    sort_3(A);
    while(B)
    {
        index = check_index(*A, *B);
        if (index == 1)
            push(A, B);
        if (index == 2)
        {
            push(A, B);
            swap(A);
        }
        if (index == 3)
        {
            rotate(A);
            rotate(A);
            push(A, B);
            reverse_rotate(A);
            reverse_rotate(A);
        }
        if (index == 4)
        {
            reverse_rotate(A);
            push(A, B);
            rotate(A);
            rotate(A);
        }
    }
}