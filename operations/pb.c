/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:40:49 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:40:55 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    pb(t_list **stack1, t_list **stack2)
{
    t_list *s1_head;
    t_list *s2_head;
    t_list *temp;

    s1_head = *stack1;
    s2_head = *stack2;
    temp = s1_head->next;
    *stack1 = temp;
    s1_head->next = s2_head;
    *stack2 = s1_head;
}
