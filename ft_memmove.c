/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 02:14:28 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 04:50:41 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	long int	i;
	char		*a;
	char		*b;

	i = 0;
	if (dst == NULL && src == NULL)
		return (dst);
	a = (char *)(dst);
	b = (char *)(src);
	if (a > b)
	{
		i = len - 1;
		while (i >= 0)
		{
			a[i] = b[i];
			i--;
		}
		return (dst);
	}
	while (i < (long int)len)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char	a[7];
	char	b[7];

	printf("%s \n", (char *)memmove(a, "abcdef\0", 7));
	printf("%s", (char *)ft_memmove(b, "abcdef\0", 7));
	printf("\n %s \n %s \n", a, b);
	printf("%s \n", (char *)memmove(a, "xyz", 3));
	printf("%s", (char *)ft_memmove(b, "xyz", 3));
	printf("\n %s \n %s \n", a, b);
	printf("%s \n", (char *)memmove(a, "lmno\0", 7));
	printf("%s", (char *)ft_memmove(b, "lmno\0", 7));
	printf("\n %s \n %s \n", a, b);

	char	weird1[20] = "MemmoveSucks";
	char	weird2[20] = "MemmoveSucks";
	printf("%s \n", (char *)memmove(weird1 + 6, weird1, 7));
	printf("%s", (char *)ft_memmove(weird2 + 6, weird2, 7));
	printf("\n %s \n %s \n", weird1, weird2);
}
*/