/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:32:43 by enaam             #+#    #+#             */
/*   Updated: 2023/05/03 16:30:59 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SAWP_H
# define PUSH_SAWP_H

# include <stdio.h>
# include <stdlib.h>

typedef struct s_push_swap
{
	int			data;
	struct s_push_swap	*next;
}				t_push_swap;

t_push_swap		*ft_lstnew(int data);
t_push_swap		*ft_lstlast(t_push_swap *lst);
void	ft_lstadd_back(t_push_swap **lst,
					t_push_swap *new);

#endif
