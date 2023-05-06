/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:32:43 by enaam             #+#    #+#             */
/*   Updated: 2023/05/06 15:22:11 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SAWP_H
# define PUSH_SAWP_H

# define RED "\033[1;31m"
# define GREEN "\033[0;32m"
# define WHITE "\033[0;37m"

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_push_swap
{
	int					data;
	struct s_push_swap	*next;
}						t_push_swap;

t_push_swap				*ft_lstnew(int data);
t_push_swap				*ft_lstlast(t_push_swap *lst);
void					ft_lstadd_back(t_push_swap **lst, t_push_swap *new);
void					*ft_malloc(int size);
char					**ft_split(char *s, char c);
void					parsing(t_push_swap **pus, char **av);
void					is_duplecite(t_push_swap *stack_a);
void					ft_putstr(char *s, char *color, int fd);
void					ft_lstclear(t_push_swap **lst);

#endif
