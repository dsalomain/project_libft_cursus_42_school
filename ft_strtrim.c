/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 08:40:00 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/01 10:05:26 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t		i;
	size_t		j;
	char		*render;
	size_t		start;
	size_t		end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	render = malloc(sizeof(char) * (end - start + 1));
	if (!render)
		return (NULL);
	i = start;
	j = 0;
	while (i < end)
	{
		render[j++] = s1[i++];
	}
	render[j] = '\0';
	return (render);
}
