/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:01:01 by enaam             #+#    #+#             */
/*   Updated: 2023/05/11 17:53:23 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_s;

	tmp_s = *stack_b;
	tmp = ft_lstlast(stack_b);
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
	tmp_h->data = tmp_s->data + tmp_h->data;
	tmp_s->data = tmp_s->data - tmp_s->data;
	tmp_h->data = tmp_s->data - tmp_s->data;
}

void	push_b(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_b;
	t_push_swap	*tmp_a;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
		exit (EXIT_FAILURE);
	tmp_b = tmp_a;
}

void	ft_reverse_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_n;

	tmp_h = *stack_b;
	tmp_n = *stack_b;
	tmp = ft_lstlast(stack_b);
	while (tmp_n->next->next)
		tmp_n = tmp_n->next;
	tmp_n = NULL;
	tmp->next = tmp_h;
	*stack_b = tmp;
}
