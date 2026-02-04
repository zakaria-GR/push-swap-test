#include "../push_swap.h"

int find_big(t_list **A)
{
	int		bigN;
    t_list  *temp;

    temp = *A;
    bigN = temp->value;
    while (temp)
    {
        if (temp->value > bigN)
			bigN = temp->value;
		temp = temp->next;
    }
	return (bigN);
}