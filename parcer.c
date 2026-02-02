#include "push_swap.h"

int main(int ac, char **av)
{
	int size;
	int *arr;
	t_list	*A;
	t_list	*B;
	int i;

	if (ac < 2)
		return (0);
	arr = parce_args(ac, av, &size);
	into_stack_a(&A, arr, size);

	t_list *temp1 = A;
    
    while(temp1)
    {
        printf("%d", temp1->value);
        temp1 = temp1->next;
    }
	return 0;
}
