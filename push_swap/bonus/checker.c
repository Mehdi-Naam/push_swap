/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:11:38 by enaam             #+#    #+#             */
/*   Updated: 2023/05/20 19:21:25 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

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

void	ft_nsc(t_push_swap **stack_a, t_push_swap **stack_b)
{
	
}

void	checher(t_push_swap **stack_a, t_push_swap **stack_b)
{
	
}
