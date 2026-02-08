/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_the_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:25:23 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:25:25 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	index_the_stack(t_list **A)
{
	t_list	*temp;
	t_list	*curr;
	int		i;
	int		index;
	int		current_v;

	index = 0;
	i = 0;
	temp = *A;
	curr = *A;
	while (curr)
	{
		current_v = curr->value;
		while (temp)
		{
			if (temp->value < current_v)
				index++;
			temp = temp->next;
		}
		curr->index = index;
		curr = curr->next;
		index = 0;
		temp = *A;
	}
}
