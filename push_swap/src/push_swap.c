/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:32:37 by enaam             #+#    #+#             */
/*   Updated: 2023/05/22 11:47:28 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	long_sort(t_push_swap **stack_a, t_push_swap **stack_b, int size)
{
	if (size <= 200)
	{
		ft_push_to_b(stack_a, stack_b, 5);
		ft_major_comajor(stack_a, stack_b);
	}
	else
	{
		ft_push_to_b(stack_a, stack_b, 9);
		ft_major_comajor(stack_a, stack_b);
	}
}

void	simpl_sort(t_push_swap **stack_a, t_push_swap **stack_b)
{
	int	size;

	size = ft_lstsize(*stack_a);
	if (size == 2)
		sort_two(stack_a);
	else if (size == 3)
		sort_three(stack_a);
	else if (size == 4)
		sort_for(stack_a, stack_b);
	else if (size == 5)
		sort_five(stack_a, stack_b);
	else if (size > 5)
	{
		ft_indix(stack_a);
		long_sort(stack_a, stack_b, size);
	}
}

void	leaks(void)
{
	system("leaks push_swap");
}

int	main(int ac, char **av)
{
	t_push_swap	*stack_a;
	t_push_swap	*stack_b;

	// atexit(leaks);
	if (ac < 2)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	parsing(&stack_a, av);
	is_duplecite(stack_a);
	if (is_sorted(stack_a))
		exit(0);
	simpl_sort(&stack_a, &stack_b);
	ft_lstclear(&stack_a);
}
