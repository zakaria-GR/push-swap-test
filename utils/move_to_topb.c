/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_to_topb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:25:48 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:25:51 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	move_to_topb(t_list **B, int index)
{
	int	size;
	int	fst;
	int	sec;

	size = ft_lstsize(*B);
	fst = index - 1;
	sec = size - index + 1;
	if (index <= size / 2)
	{
		while (fst > 0)
		{
			rb(B);
			fst--;
		}
	}
	else if (index > size / 2)
	{
		while (sec > 0)
		{
			rrb(B);
			sec--;
		}
	}
}
