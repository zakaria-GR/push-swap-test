/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_index.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:23:34 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:23:40 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_index(t_list *A, int value)
{
	int	index;
	int	target_value;

	target_value = value;
	index = 1;
	while (A)
	{
		if (A->value == target_value)
			return (index);
		else
		{
			index++;
			A = A->next;
		}
	}
	return (-1);
}
