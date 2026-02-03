#include "../push_swap.h"

void	sort_5(t_list **A, t_list **B)
{
    push(B, A);
    push(B, A);
    if ((*B)->value < (*B)->next-value)
        swap(B);
    sort_3(A);
}