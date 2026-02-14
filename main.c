/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:36:08 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:36:11 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	int		size;
	int		*arr;
	t_list	*a;
	t_list	*b;

	if (ac < 2)
		return (0);
	arr = parce_args(ac, av, &size);
	into_stack_a(&a, arr, size);
	b = NULL;
	index_the_stack(&a);
	if (ft_lstsize(a) == 2)
		sort_2(&a);
	if (ft_lstsize(a) == 3)
		sort_3(&a);
	if (ft_lstsize(a) == 5 || ft_lstsize(a) == 4)
		sort_5(&a, &b);
	if (ft_lstsize(a) > 5)
		sort_big(&a, &b);
	lstclear(&a);
	lstclear(&b);
	free(arr);
}
