/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enaam <enaam@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 18:35:46 by enaam             #+#    #+#             */
/*   Updated: 2023/05/06 14:59:06 by enaam            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	cun_word(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

static char	*ft_word(char *s, char c, int *idx)
{
	int		i;
	char	*str;
	int		len;
	int		w;

	i = *idx;
	while (s[i] == c && s[i])
		i++;
	len = i;
	while (s[i] != c && s[i])
		i++;
	str = ft_malloc((i - len + 1) * sizeof(char));
	w = 0;
	while (w < (i - len))
	{
		str[w] = s[len + w];
		w++;
	}
	str[w] = '\0';
	*idx = i;
	return (str);
}

void	ft_free(char **s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

char	**ft_split(char *s, char c)
{
	int		i;
	int		len;
	char	**sp;
	char	*word;
	int		w;

	i = 0;
	w = 0;
	len = cun_word(s, c);
	sp = ft_malloc((len + 1) * sizeof(char *));
	while (w < len)
	{
		word = ft_word(s, c, &i);
		if (!word)
			ft_free(&word);
		sp[w++] = word;
	}
	sp[w] = NULL;
	return (sp);
}
