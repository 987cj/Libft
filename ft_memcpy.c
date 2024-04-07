/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 12:02:09 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/18 12:45:35 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long int	i;
	char				*a;
	char				*b;

	i = 0;
	if (dst == NULL && src == NULL)
	{
		return (dst);
	}
	a = (char *)(dst);
	b = (char *)(src);
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
/*
int	main(void)
{
	char	dest1[] = "abcdef";
	char	dest2[] = "abcdef";
	char	source[] = "123";

	printf("%s \n", memcpy(dest1 + 2, source, 4));
	printf("%s \n", dest1);
	printf("%s \n", ft_memcpy(dest2 + 2, source, 4));
	printf("%s", dest2);
}
*/
