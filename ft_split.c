/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloukas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:03:24 by gloukas           #+#    #+#             */
/*   Updated: 2022/10/20 16:50:24 by gloukas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (s)
	{
		while (s[i])
		{
			if (s[i] != c && (i == 0 || s[i - 1] == c))
				count++;
			i++;
		}
	}
	return (count);
}

static void	ft_free(char **t, int n)
{
	int	i;

	i = 0;
	if (t[i] == NULL)
	{
		while (i < n)
		{
			free(t[i]);
			i++;
		}
		free(t);
	}
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	start;
	size_t	j;

	if (!s)
		return (NULL);
	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1));
	if (tab == NULL)
		return (NULL);
	while (j < ft_count_words(s, c))
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		tab[j] = ft_substr(s, start, i - start);
		ft_free(tab, j);
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
