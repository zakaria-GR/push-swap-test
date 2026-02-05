#include "../push_swap.h"

void    sort_big(t_list **A, t_list **B)
{
    int minN;
    int i_minN;
    
    while (ft_lstsize(*A) > 0)
    {
        minN = find_min(A);
        i_minN = check_index(*A, minN);
        //find_min(A) == minN;
        move_to_top(A, i_minN);
        push(A, B);
        printf("pb\n");
    }
    while (ft_lstsize(*B) > 0)
    {
        push(B, A);
        printf("pa\n");
    }
}