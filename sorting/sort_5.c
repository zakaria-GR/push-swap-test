#include "../push_swap.h"

void	sort_5(t_list **A, t_list **B)
{
    int     minN;
    int     bigN;
    int     i_min;
    int     i_max;

    minN = find_min(A);
    bigN = find_big(A);
    i_min = check_index(*A, minN);
    i_max = check_index(*A, bigN);
    while (ft_lstsize(*A) > 3)
    {
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
    push(B, A);
    push(B, A);
}