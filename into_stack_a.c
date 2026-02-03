#include "push_swap.h"

t_list	into_stack_a(int *arr, int size)
{
	t_list	*current;
	t_list	*temp;
	t_list	*A;
	int	i;

	i = 0;

	while (i < size)
	{
		if (current->next == NULL)
		{
			temp = ft_lstnew(arr[i]);
			ft_lstadd_back(A, temp);
			current = current->next;
			i++;
		}
		
	}
}