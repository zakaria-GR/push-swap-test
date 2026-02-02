#include "push_swap.h"

void	into_stack_a(t_list **head, int *arr, int size)
{
	t_list	*current;
	t_list	*temp;
	int	i;

	i = 0;

	current = *head;
	while (i < size)
	{
		if (current->next == NULL)
		{
			temp = ft_lstnew(arr[i]);
			ft_lstadd_back(head, temp);
			current = current->next;
			i++;
		}
		
	}
}