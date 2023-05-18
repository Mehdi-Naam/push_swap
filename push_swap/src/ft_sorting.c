/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:50:17 by enaam             #+#    #+#             */
/*   Updated: 2023/05/13 18:52:51 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_min_sort(t_push_swap *stack_a)
{
	t_push_swap	*tmp;
	int			min;

	tmp = stack_a;
	min = tmp->data;
	while (tmp)
	{
		if (min > tmp->data)
			min = tmp->data;
		tmp = tmp->next;
	}
	return (min);
}

void	sort_two(t_push_swap **stack_a)
{
	ft_swap_a(stack_a, 0);
}

void	sort_three(t_push_swap **stack_a)
{
	int	fist_ag;
	int	mid_ag;
	int	last_ag;

	fist_ag = (*stack_a)->data;
	mid_ag = (*stack_a)->next->data;
	last_ag = (*stack_a)->next->next->data;
	if (fist_ag > mid_ag && mid_ag < last_ag && fist_ag < last_ag)
		ft_swap_a(stack_a, 0);
	else if (fist_ag > mid_ag && mid_ag > last_ag && fist_ag > last_ag)
	{
		ft_swap_a(stack_a, 0);
		ft_reverse_a(stack_a, 0);
	}
	else if (fist_ag > mid_ag && mid_ag < last_ag && fist_ag > last_ag)
		ft_rotate_a(stack_a, 0);
	else if (fist_ag < mid_ag && mid_ag > last_ag && fist_ag < last_ag)
	{
		ft_swap_a(stack_a, 0);
		ft_rotate_a(stack_a, 0);
	}
	else if (fist_ag < mid_ag && mid_ag > last_ag && fist_ag > last_ag)
		ft_reverse_a(stack_a, 0);
}

void	sort_for(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	min = ft_min_sort(*stack_a);
	while ((*stack_a)->data != min)
		ft_rotate_a(stack_a, 0);
	push_b(stack_a, stack_b);
	sort_three(stack_a);
	push_a(stack_a, stack_b);
}

void	sort_five(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	min = ft_min_sort(*stack_a);
	while ((*stack_a)->data != min)
		ft_rotate_a(stack_a, 0);
	push_b(stack_a, stack_b);
	sort_for(stack_a, stack_b);
	push_a(stack_a, stack_b);
}
