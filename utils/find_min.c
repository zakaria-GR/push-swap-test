/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_min.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:24:17 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:24:30 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_min(t_list **A)
{
	int		min_n;
	t_list	*temp;

	temp = *A;
	min_n = temp->value;
	while (temp)
	{
		if (temp->value < min_n)
			min_n = temp->value;
		temp = temp->next;
	}
	return (min_n);
}
