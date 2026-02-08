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

# include <stdio.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int content);
char	**ft_split(char const *s, char c);
size_t	ft_strlen(const char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		count_total_numbers(int ac, char **av);
void	error_exit(void);
int		has_duplecates(int *arr, int size);
long	atol(const char *s);
int		check_int_range(long n);
int		is_number(char *s);
void	fill_numbers(int *arr, int ac, char **av);
int		*parce_args(int ac, char **av, int *size);
void	into_stack_a(t_list **A, int *arr, int size);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		check_is_sorted(t_list *stackA);
int		ft_lstsize(t_list *lst);
void	sort_2(t_list **A);
void	sort_3(t_list **A);
void	sort_5(t_list **A, t_list **B);
int		check_index(t_list *A, int value);
int		find_min(t_list **A);
int		find_big(t_list **A);
void	move_to_top(t_list **A, int index);
void	sort_big(t_list **A, t_list **B);
void	index_the_stack(t_list **A);
int		get_chunk(t_list *A);
void	push_back(t_list **A, t_list **B);
void	pa(t_list **stack1, t_list **stack2);
void	pb(t_list **stack1, t_list **stack2);
void	ra(t_list **stack);
void	rb(t_list **stack);
void	rra(t_list **stack);
void	rrb(t_list **stack);
void	sa(t_list **stack);
void	sb(t_list **stack);
void	move_to_topb(t_list **A, int index);

#endif
