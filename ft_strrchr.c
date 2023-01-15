/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloukas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 00:38:55 by gloukas           #+#    #+#             */
/*   Updated: 2022/10/07 00:50:28 by gloukas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int find)
{
	size_t	i;

	i = ft_strlen(s);
	if ((char)find == 0)
		return ((char *)&s[ft_strlen(s)]);
	while (*s)
		s++;
	s--;
	while (i)
	{
		if (*s == (char)find)
			return ((char *)s);
		s--;
		i--;
	}
	return (NULL);
}
