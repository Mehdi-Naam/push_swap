/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:01:01 by enaam             #+#    #+#             */
/*   Updated: 2023/05/21 22:13:14 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_rotate_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_s;

	if (!(*stack_b))
		return ;
	tmp_s = *stack_b;
	tmp = ft_lstlast(*stack_b);
	*stack_b = (*stack_b)->next;
	tmp->next = tmp_s;
	tmp_s->next = NULL;
}

void	ft_swap_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_s;

	if (!(*stack_b) || !(*stack_b)->next)
		return ;
	tmp_h = *stack_b;
	tmp_s = (*stack_b)->next;
	tmp_h->data = tmp_s->data + tmp_h->data;
	tmp_s->data = tmp_h->data - tmp_s->data;
	tmp_h->data = tmp_h->data - tmp_s->data;
}

void	push_b(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*tmp_b;
	t_push_swap	*tmp_a;

	if (!(*stack_a))
		return ;
	tmp_a = *stack_a;
	tmp_b = *stack_b;
	*stack_a = (*stack_a)->next;
	tmp_a->next = tmp_b;
	*stack_b = tmp_a;
}

void	ft_reverse_b(t_push_swap **stack_b)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_n;

	if (!(*stack_b))
		return ;
	tmp_h = *stack_b;
	tmp_n = *stack_b;
	tmp = ft_lstlast(*stack_b);
	while (tmp_n->next->next)
		tmp_n = tmp_n->next;
	tmp_n->next = NULL;
	tmp->next = tmp_h;
	*stack_b = tmp;
}
