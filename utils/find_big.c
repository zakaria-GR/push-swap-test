/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:23:48 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:23:53 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	find_big(t_list **A)
{
	int		big_n;
	t_list	*temp;

	temp = *A;
	big_n = temp->value;
	while (temp)
	{
		if (temp->value > big_n)
			big_n = temp->value;
		temp = temp->next;
	}
	return (big_n);
}
