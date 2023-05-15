/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:19:44 by enaam             #+#    #+#             */
/*   Updated: 2023/05/15 14:43:26 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_push_to_b(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap *tmp;
	int			size;
	int			len;
	int			s;

	ft_indix(stack_a);
	size = ft_lstsize(*stack_a);
	len = size / 5;
	s = len;
	int i = len / 2;
	tmp = *stack_a;
	while (1)
	{
		size = ft_lstsize(*stack_a);
		while (size)
		{
			if (tmp->idx > 0 && tmp->idx < len)
			{
				if (tmp->idx >= i)
					push_b(stack_a, stack_b);
				else
				{
					push_b(stack_a, stack_b);
					ft_rotate_b(stack_b, 0);
				}
			}
			else
				ft_rotate_a(stack_a, 0);
			size--;
		}
		if (ft_lstsize(*stack_a) == 0)
			exit (0);
		len += s;
	}
}