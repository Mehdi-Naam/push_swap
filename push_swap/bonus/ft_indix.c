/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_indix.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 17:28:49 by enaam             #+#    #+#             */
/*   Updated: 2023/05/15 10:30:31 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set(t_push_swap *stack_a)
{
	t_push_swap	*tmp;

	tmp = stack_a;
	while (tmp)
	{
		tmp->idx = -1;
		tmp = tmp->next;
	}
}

int	ft_min_idx(t_push_swap *stack_a)
{
	t_push_swap	*tmp;
	int			min;

	tmp = stack_a;
	min = INT_MAX;
	while (tmp)
	{
		if (min > tmp->data && tmp->idx == -1)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

void	ft_indix(t_push_swap **stack_a)
{
	int			min;
	int			i;
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;

	i = 0;
	set(*stack_a);
	tmp_h = *stack_a;
	while (tmp_h)
	{
		tmp = *stack_a;
		min = ft_min_idx(*stack_a);
		while (tmp)
		{
			if (tmp->data == min && tmp->idx == -1)
				tmp->idx = i;
			tmp = tmp->next;
		}
		tmp_h = tmp_h->next;
		i++;
	}
}
