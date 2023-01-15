/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloukas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 16:39:00 by gloukas           #+#    #+#             */
/*   Updated: 2022/10/20 19:11:26 by gloukas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;

	if (!s1 || !s2)
		return (NULL);
	new_s = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new_s)
		return (NULL);
	ft_strlcpy(new_s, s1, ft_strlen(s1) + 1);
	ft_strlcat(new_s, s2, (ft_strlen(s1) + ft_strlen(s2) + 1));
	return (new_s);
}
