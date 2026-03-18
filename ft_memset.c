/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 18:31:36 by radjadag          #+#    #+#             */
/*   Updated: 2026/01/25 17:45:26 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;
	unsigned char	r;
	size_t			i;

	p = (unsigned char *)s;
	r = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		p[i] = r;
		i++;
	}
	return (s);
}
