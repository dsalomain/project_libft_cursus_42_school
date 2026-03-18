/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 18:14:21 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/10 06:59:34 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nb_count(long nbr)
{
	int	count;

	count = 0;
	if (nbr <= 0)
		count = 1;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	long	nbr;
	char	*s;
	int		nb_len;

	nbr = (long)n;
	nb_len = ft_nb_count(nbr);
	s = malloc(sizeof(char) * (nb_len + 1));
	if (!s)
		return (NULL);
	s[nb_len] = '\0';
	if (nbr == 0)
		s[0] = '0';
	if (nbr < 0)
	{
		s[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		s[--nb_len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (s);
}
