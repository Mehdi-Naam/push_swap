/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:01:01 by enaam             #+#    #+#             */
/*   Updated: 2023/05/09 18:14:51 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_s;

	tmp_s = *stack_b;
	tmp = ft_lstlast(stack_b);
	if (!tmp_s || !tmp)
		exit (EXIT_FAILURE);
	*stack_b = (*stack_b)->next;
	tmp->next = tmp_s;
	tmp_s->next = NULL;
}

void	ft_swap_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_s;

	tmp_h = *stack_b;
	tmp_s = (*stack_b)->next;
	if (!tmp_h || !tmp_s)
		exit (EXIT_FAILURE);
	tmp_h->data = tmp_s->data + tmp_h->data;
	tmp_s->data = tmp_s->data - tmp_s->data;
	tmp_h->data = tmp_s->data - tmp_s->data;
}

void	push_a(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_b;
	t_push_swap	*tmp_a;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	tmp_h = (*stack_b)->next;
	if (!tmp_a || !tmp_b || !tmp_h)
		exit (EXIT_FAILURE);
	tmp_b = tmp_a;
}

void	ft_reverse_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_n;

	tmp_h = *stack_b;
	tmp_n = (*stack_b)->next;
	tmp = ft_lstlast(stack_b);
}

void	ft_rrr(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_reverse_a(stack_a);
	ft_reverse_b(stack_b);
}
