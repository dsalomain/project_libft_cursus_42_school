/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:31:35 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/07 10:53:39 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_substr_cpy(char *dest, char const *s,
			unsigned int start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[len] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		len_s;
	size_t		len_sub;
	char		*sub;

	len_s = 0;
	if (!s)
		return (NULL);
	while (s[len_s])
		len_s++;
	if (start >= len_s)
		len_sub = 0;
	else if (len > (len_s - start))
		len_sub = (len_s - start);
	else
		len_sub = len;
	sub = malloc(sizeof(char) * (len_sub + 1));
	if (!sub)
		return (NULL);
	ft_substr_cpy(sub, s, start, len_sub);
	return (sub);
}
