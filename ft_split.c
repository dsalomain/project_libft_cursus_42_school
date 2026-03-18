/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: radjadag <radjadag@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 10:26:16 by radjadag          #+#    #+#             */
/*   Updated: 2026/02/10 06:03:07 by radjadag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char **tab, int i)
{
	while (i >= 0)
	{
		free (tab[i]);
		i--;
	}
	free(tab);
}

static int	ft_cnt_word(char const *str, char c)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c && (str[i + 1] == c || str[i + 1] == '\0'))
			cnt++;
		i++;
	}
	return (cnt);
}

static char	*ft_put_word(char const *str, int start, int end)
{
	char	*wrd;
	int		i;

	i = 0;
	wrd = malloc(sizeof(char) * (end - start + 1));
	if (!wrd)
		return (NULL);
	while (start < end)
	{
		wrd[i] = str[start];
		i++;
		start++;
	}
	wrd[i] = '\0';
	return (wrd);
}

static int	ft_split_verify(char **tab, char const *s, char c)
{
	size_t	i;
	size_t	length;
	int		j;
	int		start;

	i = 0;
	j = 0;
	length = ft_strlen(s);
	start = -1;
	while (i <= length)
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == length) && start >= 0)
		{
			tab[j++] = ft_put_word(s, start, i);
			if (!tab[j - 1])
				return (ft_free(tab, j - 1), -1);
			start = -1;
		}
		i++;
	}
	tab[j] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	tab = malloc(sizeof(char *) * (ft_cnt_word(s, c) + 1));
	if (!tab)
		return (NULL);
	if (ft_split_verify(tab, s, c) == -1)
		return (NULL);
	return (tab);
}
