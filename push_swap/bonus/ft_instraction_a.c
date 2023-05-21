/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:22:54 by enaam             #+#    #+#             */
/*   Updated: 2023/05/21 21:46:53 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_rotate_a(t_push_swap **stack_a)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_s;

	if (!(*stack_a))
		return ;
	tmp_s = *stack_a;
	tmp = ft_lstlast(*stack_a);
	*stack_a = (*stack_a)->next;
	tmp->next = tmp_s;
	tmp_s->next = NULL;
}

void	ft_swap_a(t_push_swap **stack_a)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_s;

	if (!(*stack_a) || !(*stack_a)->next)
		return ;
	tmp_h = *stack_a;
	tmp_s = (*stack_a)->next;
	tmp_h->data = tmp_s->data + tmp_h->data;
	tmp_s->data = tmp_h->data - tmp_s->data;
	tmp_h->data = tmp_h->data - tmp_s->data;
}

void	push_a(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*tmp_b;
	t_push_swap	*tmp_a;

	if (!(*stack_b))
		return ;
	tmp_a = *stack_a;
	tmp_b = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp_b->next = tmp_a;
	*stack_a = tmp_b;
}

void	ft_reverse_a(t_push_swap **stack_a)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_n;

	if (!(*stack_a))
		return ;
	tmp_h = *stack_a;
	tmp_n = *stack_a;
	tmp = ft_lstlast(*stack_a);
	while (tmp_n->next->next)
		tmp_n = tmp_n->next;
	tmp_n->next = NULL;
	tmp->next = tmp_h;
	*stack_a = tmp;
}
