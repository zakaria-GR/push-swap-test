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
		swap(A);
		printf("sa");
		rotate(A);
		printf("ra");
	}
	if (x > y && x < z && z > y)
	{
		swap(A);
		printf("sa");
	}
	if (x > y && x > z && y > z)
	{
		swap(A);
		printf("sa");
		reverse_rotate(A);
		printf("rra");
	}
	if (x > y && y < z && x > z)
	{
		rotate(A);
		printf("ra");
	}
		
	if (x < y && y > z && x > z)
	{
		reverse_rotate(A);
		printf("rra");
	}
		
}
