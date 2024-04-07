/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 01:35:35 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 15:58:11 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned long int	i;
	const char			*a;
	const char			*b;

	a = s1;
	b = s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return ((unsigned char)(a[i]) - (unsigned char)(b[i]));
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d \n", memcmp("abcdef", "abcdef", 6));
	printf("%d", ft_memcmp("abcdef", "abcdef", 6));
	printf("\n");
	printf("%d \n", memcmp("abcdef", "abccef", 6));
	printf("%d", ft_memcmp("abcdef", "abccef", 6));
	printf("\n");
	printf("%d \n", memcmp("abcdef", "abddef", 6));
	printf("%d", ft_memcmp("abcdef", "abddef", 6));
	printf("\n");
	printf("%d \n", memcmp("", "", 1));
	printf("%d", ft_memcmp("", "", 1));
	printf("\n");
	printf("%d \n", memcmp("", "", 6));
	printf("%d", ft_memcmp("", "", 6));
	printf("\n");
	printf("%d \n", memcmp("abc", "abc", 7));
	printf("%d", ft_memcmp("abc", "abc", 7));
	printf("\n");
	printf("%d \n", memcmp("abcdef", "abcxyz", 3));
	printf("%d", ft_memcmp("abcdef", "abcxyz", 3));
	printf("\n");
}
*/