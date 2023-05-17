/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 11:19:44 by enaam             #+#    #+#             */
/*   Updated: 2023/05/17 22:32:16 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	simpliest(t_push_swap **stack_a, t_push_swap **stack_b, int len, int s)
{
	int	i;
	int	z;

	i = s / 2;
	z = 0;
	while ((*stack_a) && z <= s - 1) /* 4 - 1 = 3*/
	{
		if ((*stack_a)->idx <= len) /* 12 */
		{
			if ((*stack_a)->idx <= len - i) /* 12 - 2 = 10 */
				push_b(stack_a, stack_b);
			else
			{
				push_b(stack_a, stack_b);
				ft_rotate_b(stack_b, 0);
			}
			z++;
		}
		else
			ft_rotate_a(stack_a, 0);
	}
}

void	ft_push_to_b(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	size;
	int	len;
	int	s;

	ft_indix(stack_a);
	size = ft_lstsize(*stack_a); /* 20 */
	len = size / 5;              /*20 / 5 = 4*/
	s = len;                     /* 4 */
	while (1)
	{
		simpliest(stack_a, stack_b, len, s);
		if (ft_lstsize(*stack_a) == 0)
			break ;
		len += s; /*len =  len + 4*/
	}
}

void	ft_major_comajor(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	size;
	t_push_swap *tmp;

	tmp = *stack_b;
	size = ft_lstsize(*stack_b);
	while (size)
	{
		if (tmp->idx == size)
		{
			push_a(stack_a, stack_b);
			size--;
		}
		else
			ft_rotate_b(stack_b, 0);
	}
}
