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

void    pa(t_list **stack1, t_list **stack2)
{
    t_list *B_head;
    t_list *A_head;
    t_list *temp;

    B_head = *stack1;
    A_head = *stack2;
    temp = B_head->next;
    *stack1 = temp;
    B_head->next = A_head;
    *stack2 = B_head;
    printf("pa\n");
}
