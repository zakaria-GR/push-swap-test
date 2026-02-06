#include "../push_swap.h"

void	index_the_stack(t_list **A)
{
	t_list  *temp;
	t_list  *curr;
	int     i;
	int     index;
	int		currentV;

	index = 0;
	i = 0;
	temp = *A;
	curr = *A;
	while (curr)
	{
		currentV = curr->value;
		while (temp)
		{
			if (temp->value < currentV)
				index++;
			temp = temp->next;
		}
		curr->index = index;
		curr = curr->next;
		index = 0;
		temp = *A;
	}
}