/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:40:03 by enaam             #+#    #+#             */
/*   Updated: 2023/05/08 20:54:00 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_lstadd_back(t_push_swap **lst, t_push_swap *new)
{
	t_push_swap *last;

	if (!(*lst))
		(*lst) = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

void ft_lstclear(t_push_swap **lst)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp2;

	tmp = *lst;

	while (tmp)
	{
		tmp2 = tmp->next;
		free(tmp);
		tmp = tmp2;
	}
}

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

t_push_swap	*ft_lstnew(int data)
{
	t_push_swap *new;

	new = (t_push_swap *)ft_malloc(sizeof(t_push_swap));
	new->data = data;
	new->next = NULL;
	return (new);
}

int	ft_lstsize(t_push_swap *lst)
{
	t_push_swap	*tmp;
	int size;

	tmp = lst;
	size = 0;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
