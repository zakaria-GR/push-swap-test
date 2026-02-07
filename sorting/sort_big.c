#include "../push_swap.h"

void    sort_big(t_list **A, t_list **B)
{
    int chunk;
    int limit;
    int i = 0;
    t_list *temp;
    
    chunk = get_chunk(*A);
    limit = chunk;
    temp = *A;
    while (*A)
    {
            if ((*A)->index < limit)
            {
                push(A, B);
                printf("pb\n");
                i++;
                if (i == limit)
                    limit += chunk;
                printf("%d\n", limit);
            }
            else
                swap(A);
    }
    //sort_3(A);
    push_back(A, B);
}
