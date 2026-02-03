#include "push_swap.h"

int check_is_sorted(t_list *stackA)
{
	int prevN;
	int currN;
	t_list	*temp;

	temp = stackA;
	while (temp)
	{
		prevN = temp->value;
		temp = temp->next;
		if (temp)
			currN = temp->value;
		if (currN < prevN)
		{
			return (0);
		}
	}
	return (1);
}
