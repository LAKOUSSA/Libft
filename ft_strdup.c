/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloukas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 05:18:42 by gloukas           #+#    #+#             */
/*   Updated: 2022/10/07 05:46:29 by gloukas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *src)
{
	char	*t;

	t = malloc(ft_strlen(src) + 1);
	if (!t)
		return (NULL);
	ft_strlcpy(t, src, ft_strlen(src) + 1);
	return (t);
}
