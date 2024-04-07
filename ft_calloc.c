/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 03:19:49 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/30 17:17:02 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void				*newbytes;
	unsigned long int	i;
	char				*a;

	newbytes = malloc(count * size);
	if (newbytes == NULL)
	{
		return (NULL);
	}
	i = 0;
	a = (char *)(newbytes);
	while (i < count * size)
	{
		a[i] = 0;
		i++;
	}
	return (newbytes);
}
