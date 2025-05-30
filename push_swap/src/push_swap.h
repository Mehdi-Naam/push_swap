/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 11:02:35 by enaam             #+#    #+#             */
/*   Updated: 2023/05/22 11:03:05 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define RED "\033[1;31m"
# define GREEN "\033[0;32m"
# define WHITE "\033[0;37m"

# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_push_swap
{
	int					data;
	int					idx;
	struct s_push_swap	*next;
}						t_push_swap;

t_push_swap	*ft_lstnew(int data);
t_push_swap	*ft_lstlast(t_push_swap *lst);
void		ft_lstadd_back(t_push_swap **lst, t_push_swap *new);
void		*ft_malloc(int size);
char		**ft_split(char *s, char c);
void		parsing(t_push_swap **pus, char **av);
void		is_duplecite(t_push_swap *stack_a);
void		ft_putstr(char *s, char *color, int fd);
void		ft_lstclear(t_push_swap **lst);
void		ft_rotate_b(t_push_swap **stack_b, int flg);
void		ft_reverse_a(t_push_swap **stack_a, int flg);
void		ft_rr(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_rrr(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_ss(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_reverse_b(t_push_swap **stack_b, int flg);
void		push_a(t_push_swap **stack_a, t_push_swap **stack_b);
void		push_b(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_swap_b(t_push_swap **stack_b, int flg);
void		ft_swap_a(t_push_swap **stack_a, int flg);
void		ft_rotate_a(t_push_swap **stack_a, int flg);
void		sort_two(t_push_swap **stack_a);
void		sort_three(t_push_swap **stack_a);
void		sort_for(t_push_swap **stack_a, t_push_swap **stack_b);
void		sort_five(t_push_swap **stack_a, t_push_swap **stack_b);
void		simpl_sort(t_push_swap **stack_a,
				t_push_swap **stack_b);
void		ft_indix(t_push_swap **stack_a);
void		ft_push_to_b(t_push_swap **stack_a,
				t_push_swap **stack_b, int chanks);
void		ft_major_comajor(t_push_swap **stack_a,
				t_push_swap **stack_b);
void		find_target(t_push_swap **stack_b, int cible, int find);
void		ft_free(char **s);
int			ft_lstsize(t_push_swap *lst);
int			is_sorted(t_push_swap *stack_a);
int			cun_word(char *s, char c);
int			ft_min_idx(t_push_swap *stack_a);
int			ft_min_sort(t_push_swap *stack_a);

#endif
