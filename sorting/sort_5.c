/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:22:46 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:22:50 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_5(t_list **A, t_list **B)
{
	int	min_n;
	int	i_minn;

	while (ft_lstsize(*A) > 3)
	{
		min_n = find_min(A);
		i_minn = check_index(*A, min_n);
		if (find_min(A) == min_n)
		{
			move_to_top(A, i_minn);
			pb(A, B);
		}
	}
	sort_3(A);
	push_back(A, B);
}
