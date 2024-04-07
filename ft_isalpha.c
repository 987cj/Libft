/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 14:58:19 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/26 14:57:49 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
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
	printf("%d \n", isalpha('5'));
	printf("%d", ft_isalpha('5'));
	printf("\n");
	printf("%d \n", isalpha('A'));
	printf("%d", ft_isalpha('A'));
	printf("\n");
	printf("%d \n", isalpha('j'));
	printf("%d", ft_isalpha('j'));
}
*/
