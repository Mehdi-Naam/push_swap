/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utile.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:19:55 by enaam             #+#    #+#             */
/*   Updated: 2023/05/03 20:56:58 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_malloc(int size)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = malloc(size);
	if (!ptr)
		return ;
	while (i < size)
	{
		ptr[i] = 0;
		i++;
	}
	return ((void *)ptr);
}

int	ft_atoi(char *str)
{
	int	i;
4	int	res;
	int	sig;

	i = 0;
	res = 0;
	sig = 1;
	while (str[i] <= 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sig = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	return (res * sig);
}
