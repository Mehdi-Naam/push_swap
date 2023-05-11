/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 17:31:35 by enaam             #+#    #+#             */
/*   Updated: 2023/05/11 17:47:37 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rrr(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_reverse_a(stack_a);
	ft_reverse_b(stack_b);
}

void	ft_rr(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
}

void	ft_ss(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_swap_b(stack_b);
	ft_swap_a(stack_a);
}
