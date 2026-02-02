/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:39:01 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:39:04 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	*parce_args(int ac, char **av, int *size)
{
	int	*arr;

	*size = count_total_numbers(ac, av);
	arr = malloc ((*size) * sizeof(int));
	if (!arr)
		error_exit();
	fill_numbers(arr, ac, av);
	if (has_duplecates(arr, *size))
		error_exit();
	return (arr);
}
