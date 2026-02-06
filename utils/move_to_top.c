#include "../push_swap.h"

void	move_to_top(t_list **A, int index)
{
	int		size;
	int		fst;
	int		sec;

	size = ft_lstsize(*A);
	fst = index - 1;
	sec = size - index + 1;
	if (index <= size / 2)
	{
		while (fst > 0)
		{
			rotate(A);
			fst--;
			printf("ra\n");
		}
	}
	else if (index > size / 2)
	{
		while (sec > 0)
		{
			reverse_rotate(A);
			sec--;
			printf("rra\n");
		}
	}
}
