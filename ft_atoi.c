/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:15:06 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 14:09:24 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

static int	checkspace(char a)
{
	if (a == ' ' || a == '\t' || a == '\n')
	{
		return (1);
	}
	else if (a == '\v' || a == '\f' || a == '\r')
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	while (checkspace(*(str + i)) == 1)
	{
		i++;
	}
	if (*(str + i) == '-' || *(str + i) == '+')
	{
		if (*(str + i) == '-')
		{
			sign = -1;
		}
		i++;
	}
	while (*(str + i) >= 48 && *(str + i) <= 57)
	{
		num = (num * 10) + (*(str + i) - 48);
		i++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	printf("%d \n", atoi(""));
	printf("%d", ft_atoi(""));
}
*/
