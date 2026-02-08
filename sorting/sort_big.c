/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:23:05 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:23:07 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_big(t_list **A, t_list **B)
{
	int	chunk;
	int	limit;
	int	i;

	chunk = get_chunk(*A);
	limit = chunk;
	i = 0;
	while (*A)
	{
		if (!(*B) && check_is_sorted(*A))
			exit(1);
		if ((*A)->index < limit)
		{
			pb(A, B);
			if ((*B) && (*B)->index < (limit - (chunk / 2)))
				rb(B);
			i++;
			if (i == limit)
				limit += chunk;
		}
		else
			ra(A);
	}
	push_back(A, B);
}
