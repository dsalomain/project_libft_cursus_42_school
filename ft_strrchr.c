/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/25 17:01:36 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/04 21:10:54 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	r;

	i = 0;
	r = (char)c;
	while (s[i])
		i++;
	while (i > 0)
	{
		if (s[i] == r)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == r)
		return ((char *)s);
	return (NULL);
}
