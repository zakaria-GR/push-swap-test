/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:43:18 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:43:28 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sb(t_list **stack)
{
	t_list *temp;
	t_list *head;

	head = *stack;
	temp = head->next;
	head->next = temp->next;
	temp->next = head;
	*stack = temp;
}
