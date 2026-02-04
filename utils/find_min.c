#include "../push_swap.h"

int find_min(t_list **A)
{
	int		minN;
    t_list  *temp;

    temp = *A;
    minN = temp->value;
    while (temp)
    {
        if (temp->value < minN)
			minN = temp->value;
		temp = temp->next;
    }
	return (minN);
}