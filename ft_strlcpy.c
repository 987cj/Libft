/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 10:44:25 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 05:25:45 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned long int	i;
	int					length;

	i = 0;
	if (dstsize != 0)
	{
		while (i < dstsize - 1 && *(src + i) != '\0')
		{
			*(dst + i) = *(src + i);
			i++;
		}
		*(dst + i) = '\0';
	}
	length = 0;
	while (*(src + length) != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main(void)
{
	char	dest1[6];
	char	dest2[6];
	char	source[] = "aphrodite";

	printf("%lu \n", strlcpy(dest1, source, 6));
	printf("%s \n", dest1);
	printf("%lu \n", ft_strlcpy(dest2, source, 6));
	printf("%s", dest2);
}
*/
