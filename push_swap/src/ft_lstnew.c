/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_listnew.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:29:39 by enaam             #+#    #+#             */
/*   Updated: 2023/05/03 16:22:26 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push_swap	*ft_lstnew(int data)
{
	t_push_swap *new;

	new = (t_push_swap *)malloc(sizeof(t_push_swap));
	if (!new)
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}