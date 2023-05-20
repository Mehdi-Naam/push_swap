/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 16:32:37 by enaam             #+#    #+#             */
/*   Updated: 2023/05/20 18:02:33 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	display(t_push_swap *stack_a, char c)
{
	t_push_swap	*tmp;

	printf("%s", GREEN);
	printf("\t\tstack %c\t\t\n", c);
	printf("|_______________________________|\n");
	printf("|\tdata\t|\tindex\t|\n");
	printf("|_______________|_______________|\n");
	tmp = stack_a;
	if (tmp)
	{
		while (tmp)
		{
			printf("|\t%d\t|\t%d\t|\n", tmp->data, tmp->idx);
			tmp = tmp->next;
		}
	}
	else
		printf("mok");
	printf("|_______________|_______________|\n");
	printf("%s", WHITE);
}

void	long_sort(t_push_swap *stack_a, t_push_swap *stack_b, int size)
{
	if (size <= 200)
	{
		ft_push_to_b(&stack_a, &stack_b, 5);
		ft_major_comajor(&stack_a, &stack_b);
	}
	else
	{
		ft_push_to_b(&stack_a, &stack_b, 9);
		ft_major_comajor(&stack_a, &stack_b);
	}
}

void	simpl_sort(t_push_swap *stack_a, t_push_swap *stack_b)
{
	int	size;

	size = ft_lstsize(stack_a);
	if (size == 2)
		sort_two(&stack_a);
	else if (size == 3)
		sort_three(&stack_a);
	else if (size == 4)
		sort_for(&stack_a, &stack_b);
	else if (size == 5)
		sort_five(&stack_a, &stack_b);
	else if (size > 5)
	{
		ft_indix(&stack_a);
		long_sort(stack_a, stack_b, size);
	}
}

int	main(int ac, char **av)
{
	t_push_swap *stack_a;
	t_push_swap *stack_b;

	if (ac < 2)
		return (-1);
	stack_a = NULL;
	stack_b = NULL;
	parsing(&stack_a, av);
	// display(stack_a, 'A');
	// exit(0);
	is_duplecite(stack_a);
	if (is_sorted(stack_a))
		exit(0);
	simpl_sort(stack_a, stack_b);
}