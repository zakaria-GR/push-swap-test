/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:41:50 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:41:52 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    rb(t_list **stack)
{
    t_list *head;
    t_list *firstnode;

    head = *stack;
    firstnode = *stack;
    while (firstnode->next != NULL)
    {
        firstnode = firstnode->next;
    }
    firstnode->next = head;
    *stack = head->next;
    head->next = NULL;
}
