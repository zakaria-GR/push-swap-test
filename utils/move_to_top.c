/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_top.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:26:02 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:26:04 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_to_top(t_list **A, int index)
{
	int	size;
	int	fst;
	int	sec;

	size = ft_lstsize(*A);
	fst = index - 1;
	sec = size - index + 1;
	if (index <= size / 2)
	{
		while (fst > 0)
		{
			ra(A);
			fst--;
		}
	}
	else if (index > size / 2)
	{
		while (sec > 0)
		{
			rra(A);
			sec--;
		}
	}
}
