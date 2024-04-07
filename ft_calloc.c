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
#include <stdlib.h>
#include <stdio.h>

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
/*
int	main(void)
{
	char	*a;
	char	*b;
	int		i;

	a = calloc(5, sizeof(char));
	b = ft_calloc(5, sizeof(char));
	
	a[0] = 'd';
	b[0] = 'd';
	i = 0;
	while (i < 5)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf("%d ", b[i]);
		i++;
	}
}
*/
