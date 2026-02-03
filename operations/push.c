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

void    push(t_list **stackB, t_list **stackA)
{
    t_list *B_head;
    t_list *A_head;
    t_list *temp;

    B_head = *stackB;
    A_head = *stackA;
    temp = B_head->next;
    *stackB = temp;
    B_head->next = A_head;
    *stackA = B_head;
}
