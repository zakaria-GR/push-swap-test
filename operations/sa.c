/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:42:57 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:42:59 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sa(t_list **stack)
{
	t_list *temp;
	t_list *head;

	head = *stack;
	temp = head->next;
	head->next = temp->next;
	temp->next = head;
	*stack = temp;
	printf("sa\n");
}
