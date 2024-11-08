/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenkrar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 21:03:58 by abenkrar          #+#    #+#             */
/*   Updated: 2024/10/25 10:35:22 by abenkrar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*p_str1;
	const unsigned char	*p_str2;

	i = 0;
	p_str1 = (const unsigned char *)(s1);
	p_str2 = (const unsigned char *)(s2);
	while (i < n)
	{
		if (p_str1[i] != p_str2[i])
		{
			return (p_str1[i] - p_str2[i]);
		}
		i++;
	}
	return (0);
}
