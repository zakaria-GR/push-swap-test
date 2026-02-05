#include "../push_swap.h"

void	sort_2(t_list **A)
{
	if ((*A)->value > (*A)->next->value)
	{
		swap(A);
		printf("sa");
	}
}