/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:19:45 by enaam             #+#    #+#             */
/*   Updated: 2023/05/22 11:05:23 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_atoi(char *str)
{
	int			i;
	int			sig;
	long int	res;
	long int	f_res;

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
	f_res = res * sig;
	if (f_res < -2147483648 || f_res > 2147483647)
	{
		ft_putstr("Error : 'MAXINT' or 'MININT'!\n", RED, 2);
		exit(EXIT_FAILURE);
	}
	return (f_res);
}

int	is_degit(char *s)
{
	int	i;

	i = 0;
	if ((s[0] == '-' || s[0] == '+') && s[1] != '\0')
		i++;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

void	non_diegit(t_push_swap **stack_a, char **sp)
{
	ft_lstclear(stack_a);
	ft_free(sp);
	ft_putstr("Error : this project does not accept characters!\n", RED, 2);
	exit(EXIT_FAILURE);
}

void	empty_str(char **av, int j)
{
	if (cun_word(av[j], ' ') == 0)
	{
		ft_putstr("ERROR\n", RED, 2);
		exit(EXIT_FAILURE);
	}
}

void	parsing(t_push_swap **stack_a, char **av)
{
	int			i;
	int			j;
	char		**sp;
	t_push_swap	*new;

	j = 0;
	while (av[++j])
	{
		empty_str(av, j);
		sp = ft_split(av[j], ' ');
		i = 0;
		while (sp[i])
		{
			if (is_degit(sp[i]))
			{
				new = ft_lstnew(ft_atoi(sp[i]));
				ft_lstadd_back(stack_a, new);
			}
			else
				non_diegit(stack_a, sp);
			i++;
		}
		ft_free(sp);
	}
}
