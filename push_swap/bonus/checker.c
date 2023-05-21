/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/21 17:11:11 by enaam             #+#    #+#             */
/*   Updated: 2023/05/21 21:47:43 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

static int	ft_str(char *s1, char *s2)
{
	int	i;
	int	flg;

	i = 0;
	flg = 0;
	while ((s1[i] && s1[i] != '\n') || s2[i])
	{
		if (s1[i] == s2[i])
			flg = 1;
		else
			return (0);
		i++;
	}
	return (flg);
}

void	ft_insc(t_push_swap **stack_a, t_push_swap **stack_b, char *s)
{
	if (ft_str("sa\n", s))
		ft_swap_a(stack_a);
	else if (ft_str("sb\n", s))
		ft_swap_b(stack_b);
	else if (ft_str("pa\n", s))
		push_a(stack_a, stack_b);
	else if (ft_str("pb\n", s))
		push_b(stack_a, stack_b);
	else if (ft_str("ra\n", s))
		ft_rotate_a(stack_a);
	else if (ft_str("rb\n", s))
		ft_rotate_b(stack_b);
	else if (ft_str("rra\n", s))
		ft_reverse_a(stack_a);
	else if (ft_str("rrb\n", s))
		ft_reverse_b(stack_b);
	else if (ft_str("rrr\n", s))
		ft_rrr(stack_a, stack_b);
	else if (ft_str("rr\n", s))
		ft_rr(stack_a, stack_b);
	else if (ft_str("ss\n", s))
		ft_ss(stack_a, stack_b);
	else
		exit (1);
}

void	ft_checker(t_push_swap **stack_a, t_push_swap **stack_b)
{
	char	*str;

	while (1)
	{
		str = get_next_line(0);
		if (!str)
			break ;
		ft_insc(stack_a, stack_b, str);
		free(str);
	}
}

int	main(int ac, char **av)
{
	(void)ac;
	t_push_swap *stack_a;
	t_push_swap *stack_b;

	stack_a = NULL;
	stack_b = NULL;
	parsing(&stack_a, av);
	is_duplecite(stack_a);
	ft_checker(&stack_a, &stack_b);
	if (is_sorted(stack_a))
		ft_putstr("OK\n", GREEN, 1);
	else
		ft_putstr("KO\n", RED, 1);
}