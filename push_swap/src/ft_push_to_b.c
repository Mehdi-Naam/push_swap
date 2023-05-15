/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:19:44 by enaam             #+#    #+#             */
/*   Updated: 2023/05/15 20:18:07 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simpliest(t_push_swap **stack_a, t_push_swap **stack_b, int len, int i)
{
	int	size;

	size = ft_lstsize(*stack_a);
	while ((*stack_a) && size-- != 0)
	{
		if ((*stack_a)->idx <= len)
		{
			if ((*stack_a)->idx <= len - i)
				push_b(stack_a, stack_b);
			else
			{
				push_b(stack_a, stack_b);
				ft_rotate_b(stack_b, 0);
			}
		}
		else
			ft_rotate_a(stack_a, 0);
	}
}

void	ft_push_to_b(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int size;
	int len;
	int s;
	int i;

	ft_indix(stack_a);
	size = ft_lstsize(*stack_a) - 1;
	len = size / 5;
	s = len;
	i = len / 2;
	while (1)
	{
		simpliest(stack_a, stack_b, len, i);
		if (ft_lstsize(*stack_a) == 0)
			break;
		len += s;
	}
}