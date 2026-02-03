#include "../push_swap.h"

void	sort_3(t_list **A)
{
	int		x;
	int		y;
	int		z;

	x = (*A)->value;
	y = (*A)->next->value;
	z = (*A)->next->next->value;
	if (x > y && x < z && z > y)
		swap(A);
	if (x > y && x > z && y > z)
	{
		swap(A);
		reverse_rotate(A);
	}
	if (x > y && y < z && x > z)
		rotate(A);
	if (x < y && x < z && y > x)
	{
		swap(A);
		rotate(A);
	}
	if (x < y && y > z && x > z)
		reverse_rotate(A);
}
