/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 14:49:22 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/03 00:23:03 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	while (dest[x] && (x < size))
		x++;
	y = 0;
	while (src[y] && ((x + y + 1) < size))
	{
		dest[x + y] = src[y];
		y++;
	}
	if (x < size)
		dest[x + y] = '\0';
	while (src[y])
		y++;
	return (x + y);
}
