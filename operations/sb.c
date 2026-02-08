#include "../push_swap.h"

void	sb(t_list **stack)
{
	t_list *temp;
	t_list *head;

	head = *stack;
	temp = head->next;
	head->next = temp->next;
	temp->next = head;
	*stack = temp;
    printf("sb\n");
}