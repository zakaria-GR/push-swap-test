#include "../push_swap.h"

void    sort_big(t_list **A, t_list **B)
{
    int chunk;
    int limit;
    int i = 0;
    
    chunk = get_chunk(*A);
    limit = chunk;
    while (ft_lstsize(*A) > 0)
    {
            if ((*A)->index < limit)
            {
                pb(A, B);
                if ((*B) && (*B)->index < (limit - (chunk / 2)))
                    rb(B);
                i++;
                if (i == limit)
                    limit += chunk;
            }
            else
                ra(A);
    }
    push_back(A, B);
}
