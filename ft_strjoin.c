/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:47:13 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/01 13:48:59 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*str_join;

	if (!s1 || !s2)
		return (NULL);
	str_join = malloc(sizeof(char) *(ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str_join)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		str_join[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < ft_strlen(s2))
	{
		str_join[i + j] = s2[j];
		j++;
	}
	str_join[i + j] = '\0';
	return (str_join);
}
