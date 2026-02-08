#include "../push_swap.h"

void	sort_5(t_list **A, t_list **B)
{
    int     minN;
    int     bigN;
    int     i_minN;
    int     i_bigN;

    minN = find_min(A);
    bigN = find_big(A);
    while (ft_lstsize(*A) > 3)
    {
        i_minN = check_index(*A, minN);
        i_bigN = check_index(*A, bigN);
        if (find_big(A) == bigN)
        {
            move_to_top(A, i_bigN);
            pb(A, B);
        }
        else if(find_min(A) == minN)
        {
            move_to_top(A, i_minN);
            pb(A, B);
        }
    }
    sort_3(A);
    if ((*B)->value > (*B)->next->value)
        sa(B);
    pa(B, A);
    pa(B, A);
    if ((*A)->value > (*A)->next->value)
        ra(A);
}
