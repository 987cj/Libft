/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 03:20:10 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 14:19:51 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

static int	same_string(const char *mainstr, const char *otherstr)
{
	int	i;

	i = 0;
	while (*(mainstr + i) != '\0')
	{
		if (*(mainstr + i) != *(otherstr + i))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long int	i;
	unsigned long int	length;

	length = ft_strlen(needle);
	if (*(needle) == '\0')
	{
		return ((char *)(haystack));
	}
	if (length > len && haystack != NULL)
	{
		return (NULL);
	}
	i = 0;
	while (haystack[i] != '\0' && i <= (len - length))
	{
		if (haystack[i] == *(needle))
		{
			if (same_string(needle, haystack + i) == 1)
			{
				return ((char *)(haystack + i));
			}
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char a[] = "Ready Go";
	char b[] = "Yes";
	printf("%s \n", strnstr(a, b, 12));
	printf("%s", ft_strnstr(a, b, 12));

	printf("\n");
	printf("%s", ft_strnstr(((void *)0), "fake", 3));
}
*/