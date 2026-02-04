#include "../push_swap.h"

int	check_index(t_list *A, t_list *B)
{
	t_list	*curr;
	int		index;

	index = 1;
	curr = A;
	while (curr)
	{
		if (B->value > A->value)
		{
			index++;
		}
		curr = curr->next;
	}
	return (index);
}