#include "../push_swap.h"

int	check_index(t_list *A, int value)
{
	int		index;
	int 	target_value;

	target_value = value;
	index = 1;
	while(A)
	{
		if (A->value == target_value)
			return (index);
		else
		{
			index++;
			A = A->next;
		}
	}
	return (-1);
}