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
