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
