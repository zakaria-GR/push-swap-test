#include "../push_swap.h"

void	sort_5(t_list **A, t_list **B)
{
    int     minN;
    int     bigN;
    int     i_min;
    int     i_max;

    while (ft_lstsize(*A) > 3)
    {
        minN = find_min(A);
        bigN = find_big(A);
        i_min = check_index(*A, minN);
        i_max = check_index(*A, bigN);
        if (i_min > i_max)
        {
            move_to_top(A, i_max, bigN);
            push(A, B);
        }
        else
        {
            move_to_top(A, i_min, minN);
            push(A, B);
        }
    }
    sort_3(A);
    if ((*B)->value > (*B)->next->value)
        swap(B);
    push(B, A);
    push(B, A);
    if ((*A)->value > (*A)->next->value)
        rotate(A);
}
