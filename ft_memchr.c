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
