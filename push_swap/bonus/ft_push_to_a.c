/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 18:18:14 by enaam             #+#    #+#             */
/*   Updated: 2023/05/20 17:35:56 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_find(t_push_swap **stack_b, int serch)
{
	t_push_swap	*tmp;
	int			i;

	i = 0;
	tmp = (*stack_b);
	while (tmp)
	{
		if (tmp->idx == serch)
			break ;
		i++;
		tmp = tmp->next;
	}
	return (i);
}

void	find_target(t_push_swap **stack_b, int cible, int find)
{
	int	size;
	int	mid;

	size = ft_lstsize(*stack_b);
	mid = size / 2;
	while ((*stack_b) && (*stack_b)->idx != cible)
	{
		if (find <= mid)
			ft_rotate_b(stack_b, 0);
		else if (find > mid)
			ft_reverse_b(stack_b, 0);
	}
}

void	push_to_a_swap(t_push_swap **stack_a, t_push_swap **stack_b, int cm, int *size)
{
	find_target(stack_b, cm, ft_find(stack_b, cm));
	push_a(stack_a, stack_b);
	find_target(stack_b, *size, ft_find(stack_b, *size));
	(*size)--;
	push_a(stack_a, stack_b);
	ft_swap_a(stack_a, 0);
}

int	ft_instrac(int find, int size)
{
	int	ins;

	ins = 0;
	if (find <= size / 2)
		ins = find;
	else
		ins = size - find;
	return (ins);
}

void	ft_major_comajor(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	size;
	int	major;
	int	comajor;
	int	major_i;
	int	comajor_i;

	size = ft_lstsize(*stack_b) - 1;
	while (size)
	{
		major = size;
		comajor = size - 1;
		major_i = ft_instrac(ft_find(stack_b, major), size);
		comajor_i = ft_instrac(ft_find(stack_b, comajor), size);
		if (major_i <= comajor_i)
		{
			find_target(stack_b, major, ft_find(stack_b, major));
			push_a(stack_a, stack_b);
		}
		else
			push_to_a_swap(stack_a, stack_b, comajor, &size);
		size--;
	}
	push_a(stack_a, stack_b);
}
