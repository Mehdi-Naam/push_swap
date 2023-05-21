/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:31:35 by enaam             #+#    #+#             */
/*   Updated: 2023/05/21 16:21:05 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rrr(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_reverse_a(stack_a, 1);
	ft_reverse_b(stack_b, 1);
	ft_putstr("rrr\n", WHITE, 1);
}

void	ft_rr(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_rotate_a(stack_a, 1);
	ft_rotate_b(stack_b, 1);
	ft_putstr("rr\n", WHITE, 1);
}

void	ft_ss(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_swap_b(stack_b, 1);
	ft_swap_a(stack_a, 1);
	ft_putstr("ss\n", WHITE, 1);
}
