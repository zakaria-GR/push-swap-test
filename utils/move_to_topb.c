#include "../push_swap.h"

void	move_to_topb(t_list **B, int index)
{
	int		size;
	int		fst;
	int		sec;

	size = ft_lstsize(*B);
	fst = index - 1;
	sec = size - index + 1;
	if (index <= size / 2)
	{
		while (fst > 0)
		{
			rb(B);
			fst--;
		}
	}
	else if (index > size / 2)
	{
		while (sec > 0)
		{
			rrb(B);
			sec--;
		}
	}
}
