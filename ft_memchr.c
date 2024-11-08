/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:47:01 by abenkrar          #+#    #+#             */
/*   Updated: 2024/10/31 18:04:05 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)(s);
	while (i < n)
	{
		if (p[i] == (unsigned char )c)
		{
			return ((void *)(p + i));
		}
		i ++;
	}
	return (NULL);
}
