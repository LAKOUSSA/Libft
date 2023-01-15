/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gloukas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:02:29 by gloukas           #+#    #+#             */
/*   Updated: 2022/10/20 14:30:35 by gloukas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_lenght(int n)
{
	if (n <= 0)
		return (1);
	else
		return (0);
}

static char	ft_start(long n)
{
	if (n < 0)
		return ('-');
	else
		return ('0');
}

static long	ft_put(long n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	tmp;
	int		length;

	tmp = (long)n;
	length = ft_lenght(n);
	while (n)
	{
		n /= 10;
		length++;
	}
	str = (char *)malloc(sizeof(char) * length + 1);
	if (!str)
		return (NULL);
	str[length] = '\0';
	if (tmp <= 0)
		str[0] = ft_start(tmp);
	while (tmp)
	{
		str[--length] = ft_put(tmp) % 10 + '0';
		tmp /= 10;
	}
	return (str);
}
