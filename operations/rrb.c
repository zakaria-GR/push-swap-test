/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 18:20:44 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/08 18:20:53 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rrb(t_list **stack)
{
	t_list	*head;
	t_list	*lastnode;

	head = *stack;
	lastnode = *stack;
	while (lastnode->next != NULL)
	{
		lastnode = lastnode->next;
	}
	*stack = lastnode;
	lastnode->next = head;
	while (head->next != lastnode)
	{
		head = head->next;
	}
	head->next = NULL;
	printf ("rrb\n");
}
