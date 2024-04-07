/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 16:19:22 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/26 14:39:22 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

size_t	ft_strlen(const char *s)
{
	unsigned long int	length;

	length = 0;
	while (*(s + length) != '\0')
	{
		length++;
	}
	return (length);
}
/*
int	main(void)
{
	char a[] = "hello \0 world";

	printf("%lu \n", strlen(a));
	printf("%lu", ft_strlen(a));
	printf("\n");
	printf("%lu \n", strlen("abc"));
	printf("%lu", ft_strlen("abc"));
	printf("\n");
	printf("%lu \n", strlen(""));
	printf("%lu", ft_strlen(""));
	printf("\n");
	printf("%lu \n", strlen("    "));
	printf("%lu", ft_strlen("    "));
}
*/
