/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:46:16 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/26 14:56:51 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <strings.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	char					*a;
	unsigned long int		i;

	a = (char *)(s);
	i = 0;
	while (i < n)
	{
		*(a + i) = 0;
		i++;
	}
}
/*
int main(void)
{
	char	dest1[5] = "abcd";
	char	dest2[5] = "abcd";
	int		i;

	ft_bzero(dest1, 2);
	ft_bzero(dest2, 2);
	i = 0;
	while (i < 5)
	{
		printf("%d ", dest1[i]);
		i++;
	}
	printf("\n");
	i = 0;
	while (i < 5)
	{
		printf("%d ", dest2[i]);
		i++;
	}
}
*/
