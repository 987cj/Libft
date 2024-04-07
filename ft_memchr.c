/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 01:18:07 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/24 01:41:18 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned long int	i;
	unsigned char		cc;
	const char			*a;

	a = s;
	cc = (unsigned char)(c);
	i = 0;
	while (i < n)
	{
		if ((unsigned char)(a[i]) == cc)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	a[] = "abcabc";

	printf("%s \n", (char *)memchr(a, 'b', 6));
	printf("%s", (char *)ft_memchr(a, 'b', 6));
	printf("\n");
	printf("%s \n",(char *)memchr(a, 'z', 6));
	printf("%s", (char *)ft_memchr(a, 'z', 6));
}
*/
