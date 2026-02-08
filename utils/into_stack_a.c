/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   into_stack_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:25:35 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:25:37 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	into_stack_a(t_list **A, int *arr, int size)
{
	t_list	*current;
	t_list	*temp;
	int		i;

	i = 0;
	*A = ft_lstnew(arr[i++]);
	temp = *A;
	while (i < size)
	{
		current = ft_lstnew(arr[i]);
		ft_lstadd_back(&temp, current);
		temp = temp->next;
		i++;
	}
}
