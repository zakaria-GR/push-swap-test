/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:19:53 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:19:59 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pb(t_list **stack1, t_list **stack2)
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
	printf ("pb\n");
}
