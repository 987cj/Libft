/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:26:46 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/18 11:44:37 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned long int	i;
	char				*a;

	a = (char *)(b);
	i = 0;
	while (i < len)
	{
		*(a + i) = c;
		i++;
	}
	return (b);
}
/*
int	main(void)
{
	char	dest1[5] = "aaaa";
	char	dest2[5] = "aaaa";

	printf("%s \n", memset(dest1 + 3, '.', 1));
	printf("%s \n", dest1);
	printf("%s \n", ft_memset(dest2 + 3, '.', 1));
	printf("%s", dest2);
}
*/
