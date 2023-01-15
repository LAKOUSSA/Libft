/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloukas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:22:56 by gloukas           #+#    #+#             */
/*   Updated: 2022/10/20 19:16:18 by gloukas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*funct(char const *s, unsigned int i, char *p, size_t len)
{
	size_t	j;

	j = 0;
	while (s[i])
	{
		if (j < len)
		{
			p[j] = *((char *)(s + i));
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;

	if (s == NULL)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len + start > ft_strlen(s))
		p = (char *)malloc(ft_strlen(s) - start + 1);
	else
		p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = start;
	return (funct(s, i, p, len));
}
