/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:32:37 by enaam             #+#    #+#             */
/*   Updated: 2023/05/09 14:45:55 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	main(int ac, char **av)
{
	(void)ac;
	t_push_swap	*stack_a;

	stack_a = NULL;
	parsing(&stack_a, av);
	is_duplecite(stack_a);
	if (!is_sorted(stack_a))
		exit (0);
	while (stack_a)
	{
		printf("%d\n", stack_a->data);
		stack_a = stack_a->next;
	}
}