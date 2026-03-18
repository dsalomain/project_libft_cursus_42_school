/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 22:59:27 by radjadag          #+#    #+#             */
/*   Updated: 2026/01/28 22:47:05 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*r;
	unsigned char	x;

	i = 0;
	r = (unsigned char *)s;
	x = (unsigned char )c;
	while (i < n)
	{
		if (r[i] == x)
			return ((void *)(r + i));
		i++;
	}
	return (NULL);
}
