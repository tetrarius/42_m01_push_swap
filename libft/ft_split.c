/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:50:48 by aravakia          #+#    #+#             */
/*   Updated: 2026/02/11 11:24:51 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			words++;
		i++;
	}
	return (words);
}

static char	**ft_free(char **res, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(res[i]);
		i++;
	}
	free(res);
	return (NULL);
}

static char	**ft_fill(char **res, char const *s, char c, int words)
{
	int	i;
	int	j;
	int	start;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		start = j;
		while (s[j] && s[j] != c)
			j++;
		res[i] = ft_substr(s, start, j - start);
		if (!res[i])
			return (ft_free(res, i));
		i++;
	}
	res[i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		words;

	if (!s)
		return (NULL);
	words = ft_count_words(s, c);
	res = (char **)malloc((sizeof(char *) * (words + 1)));
	if (!res)
		return (NULL);
	res = ft_fill(res, s, c, words);
	return (res);
}
