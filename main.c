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
	index_the_stack(&A);
	sort_big(&A, &B);
}
