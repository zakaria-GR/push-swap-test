#include "push_swap.h"

int main(int ac, char **av)
{
	int size;
	int *arr;
	t_list	*A;
	t_list	*B;
	//int i;

	if (ac < 2)
		return (0);
	arr = parce_args(ac, av, &size);
	into_stack_a(&A, arr, size);
	B = NULL;
	printf("total :%d\n", ft_lstsize(A));

	// if ((ft_lstsize(A)) == 2)
	// 	sort_2(&A);
	if ((ft_lstsize(A)) == 5)
		sort_5(&A, &B);

	//push(&A, &B);

	t_list *temp1 = A;
	while (temp1)
	{
		printf("%d\n", temp1->value);
		temp1 = temp1->next;
	}
	if (!check_is_sorted(A))
		printf("not sorted\n");
	if (check_is_sorted(A))
		printf("sorted\n");
}
