/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:02:34 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 05:18:30 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	unsigned long int	i;
	int					j;

	i = ft_strlen(dst);
	j = 0;
	if (dstsize == 0)
	{
		return (ft_strlen(src) + dstsize);
	}
	while (i < dstsize - 1 && src[j] != '\0')
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	if (i - j < dstsize && dstsize != 0)
	{
		dst[i] = '\0';
		return (i - j + ft_strlen(src));
	}
	return (ft_strlen(src) + dstsize);
}
/*
int	main(void)
{
	char	dest1[6] = "";
	char	dest2[6] = "";
	char	source[] = "def";

	printf("%lu \n", strlcat(dest1, source, 6));
	printf("%s \n", dest1);
	printf("%lu \n", ft_strlcat(dest2, source, 6));
	printf("%s", dest2);

	char	wtest1[30] = "pqrstuvwxyz";
	char	wtest2[30] = "pqrstuvwxyz";
	char	source2[] = "abc";

	printf("%lu \n", strlcat(wtest1, source2, 0));
	printf("%s \n", wtest1);
	printf("%lu \n", ft_strlcat(wtest2, source2, 0));
	printf("%s", wtest2);

	char dest[30]; memset(dest, 0, 30);
	char * src = (char *)"AAAAAAAAA";

	printf("\n");
	printf("%lu \n", ft_strlcat(dest, src, -1));
	printf("%s", dest);
}
*/