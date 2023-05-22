/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 15:22:54 by enaam             #+#    #+#             */
/*   Updated: 2023/05/22 11:06:37 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rotate_a(t_push_swap **stack_a, int flg)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_s;

	tmp_s = *stack_a;
	if (tmp_s->next == NULL)
		return ;
	tmp = ft_lstlast(*stack_a);
	*stack_a = (*stack_a)->next;
	tmp->next = tmp_s;
	tmp_s->next = NULL;
	if (flg == 0)
		write(1, "ra\n", 3);
}

void	ft_swap_a(t_push_swap **stack_a, int flg)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_s;

	tmp_h = *stack_a;
	tmp_s = (*stack_a)->next;
	tmp_h->data = tmp_s->data + tmp_h->data;
	tmp_s->data = tmp_h->data - tmp_s->data;
	tmp_h->data = tmp_h->data - tmp_s->data;
	tmp_h->idx = tmp_s->idx + tmp_h->idx;
	tmp_s->idx = tmp_h->idx - tmp_s->idx;
	tmp_h->idx = tmp_h->idx - tmp_s->idx;
	if (flg == 0)
		write(1, "sa\n", 3);
}

void	push_a(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*tmp_b;
	t_push_swap	*tmp_a;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp_b->next = tmp_a;
	*stack_a = tmp_b;
	write(1, "pa\n", 3);
}

void	ft_reverse_a(t_push_swap **stack_a, int flg)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_n;

	tmp_h = *stack_a;
	tmp_n = *stack_a;
	tmp = ft_lstlast(*stack_a);
	while (tmp_n->next->next)
		tmp_n = tmp_n->next;
	tmp_n->next = NULL;
	tmp->next = tmp_h;
	*stack_a = tmp;
	if (flg == 0)
		write(1, "rra\n", 4);
}
