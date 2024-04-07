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
