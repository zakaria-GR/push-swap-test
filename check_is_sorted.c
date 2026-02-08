/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:38:50 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:38:51 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_is_sorted(t_list *stackA)
{
	int		prev_n;
	int		curr_n;
	t_list	*temp;

	temp = stackA;
	while (temp)
	{
		prev_n = temp->value;
		temp = temp->next;
		if (temp)
			curr_n = temp->value;
		if (curr_n < prev_n)
		{
			return (0);
		}
	}
	return (1);
}
