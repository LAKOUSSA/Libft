/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloukas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 02:30:54 by gloukas           #+#    #+#             */
/*   Updated: 2022/10/20 15:09:37 by gloukas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!src && !dst)
		return (NULL);
	i = 0;
	if (dst > src)
	{
		while (n--)
		{
			((char *)dst)[n] = ((char *)src)[n];
		}
	}
	else
		ft_memcpy(dst, src, n);
	return (dst);
}
