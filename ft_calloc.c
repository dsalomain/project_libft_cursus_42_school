/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 12:48:13 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/09 23:40:51 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t		t;
	char		*p;

	if (size != 0 && nmemb > (size_t) -1 / size)
		return (NULL);
	t = size * nmemb;
	p = malloc(t);
	if (!p)
		return (NULL);
	ft_bzero(p, t);
	return (p);
}
