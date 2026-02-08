#include "../push_swap.h"

void	sort_3(t_list **A)
{
	int		x;
	int		y;
	int		z;

	x = (*A)->value;
	y = (*A)->next->value;
	z = (*A)->next->next->value;
	if (x < y && x < z && y > z)
	{
		sa(A);
		ra(A);
	}
	if (x > y && x < z && z > y)
		sa(A);
	if (x > y && x > z && y > z)
	{
		sa(A);
		rra(A);
	}
	if (x > y && y < z && x > z)
		ra(A);
	if (x < y && y > z && x > z)
		rra(A);
		
}
