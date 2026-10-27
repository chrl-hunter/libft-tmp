/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cperez-h <cperez-h@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/26 15:53:53 by cperez-h          #+#    #+#             */
/*   Updated: 2026/10/27 12:00:00 by cperez-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	free_split(char **ptr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(ptr[i]);
		i++;
	}
	free(ptr);
}

static int	fill_split(char **ptr, char const *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i == start)
			continue ;
		ptr[j] = ft_substr(s, start, i - start);
		if (!ptr[j])
		{
			free_split(ptr, j);
			return (0);
		}
		j++;
	}
	ptr[j] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!ptr)
		return (NULL);
	if (!fill_split(ptr, s, c))
		return (NULL);
	return (ptr);
}
