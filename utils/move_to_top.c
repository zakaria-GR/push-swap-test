#include "../push_swap.h"

void	move_to_top(t_list **A, int index)
{
	int		size;
	int		fst;
	int		sec;

	size = ft_lstsize(*A);
	fst = index - 1;
	sec = size - index + 1;
	if (index <= size / 2)
	{
		while (fst > 0)
		{
			rotate(A);
			printf("ra\n");
			fst--;
		}
	}
	else if (index > size / 2)
	{
		while (sec > 0)
		{
			reverse_rotate(A);
			printf("rra\n");
			sec--;
		}
	}
}

// int main()
// {
//     t_list *head1 = NULL;
//     t_list *head2 = NULL;

// 	t_list *newnode5 = ft_lstnew(3);
//     t_list *newnode4 = ft_lstnew(4);
//     t_list *newnode3 = ft_lstnew(5);
//     t_list *newnode2 = ft_lstnew(2);
//     t_list *newnode1 = ft_lstnew(1);

// 	ft_lstadd_front(&head1, newnode5);
//     ft_lstadd_front(&head1, newnode4);
//     ft_lstadd_front(&head1, newnode3);
//     ft_lstadd_front(&head1, newnode2);
//     ft_lstadd_front(&head1, newnode1);

//     // t_list *newnode3 = ft_lstnew("4");
//     // t_list *newnode4 = ft_lstnew("5");

//     // ft_lstadd_front(&head2, newnode3);
//     // ft_lstadd_front(&head2, newnode4);

// 	move_to_top(&head1, 3, 23423);
//     t_list *temp1 = head1;
    
//     while(temp1)
//     {
//         printf("%d", temp1->value);
//         temp1 = temp1->next;
        
//     }

//     // printf("\n");

//     // t_list *temp2 = head2;
//     // while(temp2)
//     // {
//     //     printf("%s", (char *)temp2->content);
//     //     temp2 = temp2->next;
//     // }
    
//     return 0;
// }

// If value is in first half
// moves = index - 1
// rotate

// If value is in second half
// moves = size - index + 1
// reverse_rotate
