#include "../push_swap.h"

void	move_to_top(t_list **A, int index, int value)
{
	int		size;

	size = ft_lstsize(*A);
	while ((*A)->value != value)
	{
		if (index <= size / 2)
			rotate(A);
		else
			reverse_rotate(A);
	}
}