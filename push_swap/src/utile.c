/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:19:55 by enaam             #+#    #+#             */
/*   Updated: 2023/05/06 15:07:32 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_malloc(int size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(size);
	if (!ptr)
		exit(EXIT_FAILURE);
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

void	ft_putstr(char *s, char *color, int fd)
{
	int	i;

	i = 0;
	if (!color)
	{
		while (s && s[i])
		{
			write(fd, &s[i], 1);
			i++;
		}
	}
	else
	{
		ft_putstr(color, NULL, fd);
		ft_putstr(s, NULL, fd);
		ft_putstr(WHITE, NULL, fd);
	}
}

void	is_duplecite(t_push_swap *stack_a)
{
	t_push_swap	*tmp;

	while (stack_a)
	{
		if (!stack_a->next)
			break ;
		tmp = stack_a->next;
		while (tmp)
		{
			if (stack_a->data == tmp->data)
			{
				ft_putstr("is_dup number!", RED, 2);
				exit(EXIT_FAILURE);
			}
			tmp = tmp->next;
		}
		stack_a = stack_a->next;
	}
	return ;
}
