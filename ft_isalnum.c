/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:32:59 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/26 14:57:31 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d \n", isalnum(99));
	printf("%d", ft_isalnum(99));
	printf("\n");
	printf("%d \n", isalnum('a'));
	printf("%d", ft_isalnum('a'));
	printf("\n");
	printf("%d \n", isalnum('J'));
	printf("%d", ft_isalnum('J'));
	printf("\n");
	printf("%d \n", isalnum('&'));
	printf("%d", ft_isalnum('&'));
}
*/
