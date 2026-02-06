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
            push(A, B);
            printf("pb\n");
        }
        else if(find_min(A) == minN)
        {
            move_to_top(A, i_minN);
            push(A, B);
            printf("pb\n");
        }
    }
    sort_3(A);
    if ((*B)->value > (*B)->next->value)
        swap(B);
    push(B, A);
    push(B, A);
    printf("pa\npa\n");
    if ((*A)->value > (*A)->next->value)
        rotate(A);
}
