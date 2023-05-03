/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listadd_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:31:43 by enaam             #+#    #+#             */
/*   Updated: 2023/05/03 16:31:13 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstadd_back(t_push_swap **lst, t_push_swap *new)
{
	t_push_swap *last;

	last = ft_lstlast(*lst);
	last->next = new;
}