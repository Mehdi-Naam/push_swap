/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:29:39 by enaam             #+#    #+#             */
/*   Updated: 2023/05/05 15:04:07 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push_swap	*ft_lstnew(int data)
{
	t_push_swap *new;

	new = (t_push_swap *)ft_malloc(sizeof(t_push_swap));
	new->data = data;
	new->next = NULL;
	return (new);
}