/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstclear.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:50:53 by zelguarn          #+#    #+#             */
/*   Updated: 2025/10/31 10:58:04 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*temp;

	if (!*lst || !del)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = current->next;
		del (current->content);
		free(current);
		current = temp;
	}
	*lst = NULL;
}
