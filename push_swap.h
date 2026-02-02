/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelguarn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:46:27 by zelguarn          #+#    #+#             */
/*   Updated: 2026/02/02 16:46:30 by zelguarn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>


typedef struct s_list
{
	int				*value;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(int *content);
void	push(t_list **stack1, t_list **stack2);
void	rotate(t_list **stack);
void	swap(t_list **stack);
void	reverse_rotate(t_list **stack);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		count_total_numbers(int ac, char **av);
void	error_exit(void);
int		has_duplecates(int *arr, int size);
long	atol(const char *s);
int		check_int_range(long n);
int 	is_number(char *s);
void	fill_numbers(int *arr, int ac, char **av);
int 	*parce_args(int ac, char **av, int *size);
void	sa(t_list **t_list);
void	into_stack_a(t_list **head, int *arr, int size);
void	ft_lstadd_back(t_list **lst, t_list *new);

#endif
