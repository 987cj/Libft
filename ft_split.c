/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:34:04 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 04:17:46 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	wordcount(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) != c)
		{
			if (*(s + i + 1) == c || *(s + i + 1) == '\0')
			{
				words++;
			}
		}
		i++;
	}
	return (words);
}

static int	wordlen(char const *s, int index, char c)
{
	int	wordnum;
	int	i;
	int	count;

	wordnum = 0;
	i = 0;
	while (wordnum <= index)
	{
		while (*(s + i) == c)
		{
			i++;
		}
		count = 0;
		while (*(s + i) != c && *(s + i) != '\0')
		{
			count++;
			i++;
		}
		wordnum++;
	}
	return (count);
}

static void	copyword(char const *s, int index, char *n, char c)
{
	int	wordnum;
	int	i;
	int	j;

	wordnum = 0;
	i = 0;
	j = 0;
	while (wordnum <= index)
	{
		while (*(s + i) == c)
		{
			i++;
		}
		while (*(s + i) != c && *(s + i) != '\0')
		{
			if (wordnum == index)
			{
				*(n + j) = *(s + i);
				j++;
			}
			i++;
		}
		wordnum++;
	}
	*(n + j) = '\0';
}

char	**ft_split(char const *s, char c)
{
	char	**splitarr;
	int		i;
	int		words;

	words = wordcount(s, c);
	splitarr = malloc(sizeof(char *) * (words + 1));
	if (splitarr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < words)
	{
		splitarr[i] = malloc(sizeof(char) * (wordlen(s, i, c) + 1));
		copyword(s, i, splitarr[i], c);
		i++;
	}
	splitarr[i] = NULL;
	return (splitarr);
}
