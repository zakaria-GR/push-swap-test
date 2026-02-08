/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_back.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:26:21 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:26:22 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_back(t_list **A, t_list **B)
{
	int	bign_pos;
	int	bign;

	while (ft_lstsize(*B) > 0)
	{
		bign = find_big(B);
		bign_pos = check_index(*B, bign);
		if ((*B)->value != bign)
			move_to_topb(B, bign_pos);
		pa(B, A);
	}
}
