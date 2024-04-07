/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:47:33 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/26 00:00:14 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/*
int	main(void)
{
	int	n;

	n = 0x4a;
	printf("%d \n", isascii(n));
	printf("%d", ft_isascii(n));
	printf("\n");
	n = 0x80;
	printf("%d \n", isascii(n));
	printf("%d", ft_isascii(n));
}
*/
