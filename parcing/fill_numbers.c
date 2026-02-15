/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_numbers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:37:24 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:37:27 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	free_split_and_exit(char **split, int j, int *arr)
{
	if (split)
	{
		while (split[j])
			free(split[j++]);
		free(split);
	}
	if (arr)
		free(arr);
	error_exit();
}

void	fill_numbers(int *arr, int ac, char **av)
{
	char	**split;
	int		i;
	int		j;
	int		k;
	long	n;

	i = 1;
	k = 0;
	while (i < ac)
	{
		split = ft_split(av[i], ' ');
		j = 0;
		while (split[j])
		{
			if (!is_number(split[j]))
				free_split_and_exit(split, j, arr);
			n = atol(split[j]);
			if (!check_int_range(n))
				free_split_and_exit(split, j, arr);
			arr[k++] = (int)n;
			free(split[j++]);
		}
		free(split);
		i++;
	}
}
