/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 15:17:35 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/25 16:59:58 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
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
	printf("%d \n", isdigit('a'));
	printf("%d", ft_isdigit('a'));
	printf("\n");
	printf("%d \n", isdigit('0'));
	printf("%d", ft_isdigit('0'));
	printf("\n");
	printf("%d \n", isdigit(']'));
	printf("%d", ft_isdigit(']'));
}
*/
