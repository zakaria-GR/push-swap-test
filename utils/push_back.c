#include "../push_swap.h"

void    push_back(t_list **A, t_list **B)
{
    int bigN_pos;
    int bigN;

    while (ft_lstsize(*B) > 0)
    {
        bigN = find_big(B);
        bigN_pos = check_index(*B, bigN);
        move_to_top(B, bigN_pos);
        push(B, A);
        printf("pa");
    }
}