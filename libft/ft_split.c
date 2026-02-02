/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 15:52:59 by zelguarn          #+#    #+#             */
/*   Updated: 2025/10/27 15:55:30 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../push_swap.h"

static size_t	ft_strcount(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
		{
			i++;
		}
		if (s[i] == '\0')
		{
			break ;
		}
		if (s[i] != '\0')
		{
			count += 1;
		}
		while (s[i] != c && s[i] != '\0')
		{
			i++;
		}
	}
	return (count);
}

static int	count_word2(char const *s, int i, char c)
{
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

static void	myfree(char **str, int y)
{
	while (y >= 0)
	{
		free(str[y]);
		y--;
	}
	free(str);
}

static char	**fill_split(char const *s, char c, char **str)
{
	int	i;
	int	y;
	int	start;

	i = 0;
	y = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		if (s[i] == '\0')
			break ;
		i = count_word2(s, i, c);
		str[y] = ft_substr(s, start, i - start);
		if (!str[y])
		{
			myfree(str, y - 1);
			return (NULL);
		}
		y++;
	}
	str[y] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		count;

	if (!s)
		return (NULL);
	count = ft_strcount(s, c);
	str = malloc((count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	str = fill_split(s, c, str);
	return (str);
}
