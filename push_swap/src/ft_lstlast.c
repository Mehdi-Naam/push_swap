/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:31:38 by enaam             #+#    #+#             */
/*   Updated: 2023/05/03 16:42:44 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_push_swap	*ft_lstlast(t_push_swap *lst)
{
	t_push_swap *last;

	last = lst;

	while (last)
	{
		if (last->next == NULL)
			return (last);
		last = last->next;
	}
	return (NULL);
}
