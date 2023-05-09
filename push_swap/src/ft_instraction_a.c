/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:22:54 by enaam             #+#    #+#             */
/*   Updated: 2023/05/09 17:58:47 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_a(t_push_swap **stack_a)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_s;

	tmp_s = *stack_a;
	tmp = ft_lstlast(stack_a);
	if (!tmp_s || !tmp)
		exit (EXIT_FAILURE);
	*stack_a = (*stack_a)->next;
	tmp->next = tmp_s;
	tmp_s->next = NULL;
}

void	ft_swap_a(t_push_swap **stack_a)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_s;

	tmp_h = *stack_a;
	tmp_s = (*stack_a)->next;
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
	tmp_h = (*stack_a)->next;
	if (!tmp_a || !tmp_b || !tmp_h)
		exit (EXIT_FAILURE);
	tmp_a = tmp_b;
}

void	ft_rr(t_push_swap **stack_a, t_push_swap **stack_b)
{
	ft_rotate_a(stack_a);
	ft_rotate_b(stack_b);
}

void	ft_reverse_a(t_push_swap **stack_a)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_n;

	tmp_h = *stack_a;
	tmp_n = (*stack_a)->next;
	tmp = ft_lstlast(stack_a);
	if (!tmp || !tmp_h || !tmp_n)
	tmp_n = tmp_h;
	tmp_h = tmp;
}
