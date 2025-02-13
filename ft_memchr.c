/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:47:01 by abenkrar          #+#    #+#             */
/*   Updated: 2024/11/14 16:37:16 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;

	if (s == NULL)
		return (NULL);
	i = 0;
	p = (char *)(s);
	while (i < n)
	{
		if (p[i] == c)
		{
			return ((void *)(p + i));
		}
		i++;
	}
	return (NULL);
}
