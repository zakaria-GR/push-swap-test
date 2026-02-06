#include "../push_swap.h"

int	get_chunk(t_list *A)
{
	if (ft_lstsize(A) > 100)
		return (45);
	return (20);
}