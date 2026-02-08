/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:40:06 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:40:10 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(t_list **stack1, t_list **stack2)
{
	t_list	*bhead;
	t_list	*ahead;
	t_list	*temp;

	bhead = *stack1;
	ahead = *stack2;
	temp = bhead->next;
	*stack1 = temp;
	bhead->next = ahead;
	*stack2 = bhead;
	printf ("pa\n");
}
