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
