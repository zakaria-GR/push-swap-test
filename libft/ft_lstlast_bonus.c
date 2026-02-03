/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstlast.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 18:37:55 by zelguarn          #+#    #+#             */
/*   Updated: 2025/10/30 18:39:52 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*current;

	if (!list)
		return (NULL);
	current = list;
	while (current->next != NULL)
	{
		current = current->next;
	}
	return (current);
}
