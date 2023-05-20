/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_instraction_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 17:01:01 by enaam             #+#    #+#             */
/*   Updated: 2023/05/20 17:29:01 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_rotate_b(t_push_swap **stack_b, int flg)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_s;

	tmp_s = *stack_b;
	if (tmp_s->next == NULL)
		return ;
	tmp = ft_lstlast(*stack_b);
	*stack_b = (*stack_b)->next;
	tmp->next = tmp_s;
	tmp_s->next = NULL;
	if (flg == 0)
		write(1, "rb\n", 3);
}

void	ft_swap_b(t_push_swap **stack_b, int flg)
{
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_s;

	tmp_h = *stack_b;
	tmp_s = (*stack_b)->next;
	tmp_h->data = tmp_s->data + tmp_h->data;
	tmp_s->data = tmp_h->data - tmp_s->data;
	tmp_h->data = tmp_h->data - tmp_s->data;
	tmp_h->idx = tmp_s->idx + tmp_h->idx;
	tmp_s->idx = tmp_h->idx - tmp_s->idx;
	tmp_h->idx = tmp_h->idx - tmp_s->idx;
	if (flg == 0)
		write(1, "sb\n", 3);
}

void	push_b(t_push_swap **stack_a, t_push_swap **stack_b)
{
	t_push_swap	*tmp_b;
	t_push_swap	*tmp_a;

	tmp_a = *stack_a;
	tmp_b = *stack_b;
	*stack_a = (*stack_a)->next;
	tmp_a->next = tmp_b;
	*stack_b = tmp_a;
	write(1, "pb\n", 3);
}

void	ft_reverse_b(t_push_swap **stack_b, int flg)
{
	t_push_swap	*tmp;
	t_push_swap	*tmp_h;
	t_push_swap	*tmp_n;

	tmp_h = *stack_b;
	tmp_n = *stack_b;
	tmp = ft_lstlast(*stack_b);
	while (tmp_n->next->next)
		tmp_n = tmp_n->next;
	tmp_n->next = NULL;
	tmp->next = tmp_h;
	*stack_b = tmp;
	if (flg == 0)
		write(1, "rrb\n", 4);
}
