/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 16:22:19 by enaam             #+#    #+#             */
/*   Updated: 2023/05/21 21:46:26 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHRCKER_BONUS_H
# define CHRCKER_BONUS_H

# define RED "\033[1;31m"
# define GREEN "\033[0;32m"
# define WHITE "\033[0;37m"

# include "gnl/get_next_line.h"
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_push_swap
{
	int					data;
	struct s_push_swap	*next;
}						t_push_swap;

t_push_swap	*ft_lstnew(int data);
t_push_swap	*ft_lstlast(t_push_swap *lst);
void		ft_lstadd_back(t_push_swap **lst, t_push_swap *new);
void		*ft_malloc(int size);
char		**ft_split(char *s, char c);
void		parsing(t_push_swap **pus, char **av);
void		ft_putstr(char *s, char *color, int fd);
void		ft_lstclear(t_push_swap **lst);
void		ft_rotate_b(t_push_swap **stack_b);
void		ft_reverse_a(t_push_swap **stack_a);
void		ft_rr(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_rrr(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_ss(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_reverse_b(t_push_swap **stack_b);
void		push_a(t_push_swap **stack_a, t_push_swap **stack_b);
void		push_b(t_push_swap **stack_a, t_push_swap **stack_b);
void		ft_swap_b(t_push_swap **stack_b);
void		ft_swap_a(t_push_swap **stack_a);
void		ft_rotate_a(t_push_swap **stack_a);
void		ft_free(char **s);
void		ft_insc(t_push_swap **stack_a, t_push_swap **stack_b, char *s);
void		ft_checker(t_push_swap **stack_a, t_push_swap **stack_b);
int			ft_lstsize(t_push_swap *lst);
int			is_sorted(t_push_swap *stack_a);
int			cun_word(char *s, char c);
void		is_duplecite(t_push_swap *stack_a);

#endif
