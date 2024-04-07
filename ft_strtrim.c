/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 02:24:43 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/25 16:31:26 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*findstart(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = 0;
	while (s1[i] != '\0')
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				j = -1;
				break ;
			}
			j++;
		}
		if (j != -1)
		{
			return ((char *)(s1 + i));
		}
		i++;
	}
	return (NULL);
}

static char	*findend(char const *s1, char const *set)
{
	int		i;
	int		j;

	i = ft_strlen(s1) - 1;
	while (i >= 0)
	{
		j = 0;
		while (set[j] != '\0')
		{
			if (s1[i] == set[j])
			{
				j = -1;
				break ;
			}
			j++;
		}
		if (j != -1)
		{
			return ((char *)(s1 + i));
		}
		i--;
	}
	return ((char *)s1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*string;
	char	*start;
	char	*end;
	int		i;

	i = 0;
	start = findstart(s1, set);
	end = findend(s1, set);
	while (start != NULL && (start + i) != end)
	{
		i++;
	}
	string = malloc(sizeof(char) * (i + 2));
	if (string == NULL)
		return (NULL);
	i = 0;
	while (start != NULL && (start + i) <= end)
	{
		string[i] = start[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
