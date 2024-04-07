/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 01:25:25 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 04:37:04 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	findplaces(int n)
{
	int			places;
	long int	x;

	x = n;
	places = 0;
	if (x < 0)
	{
		places++;
		x = x * -1;
	}
	while (!(x < 10))
	{
		x = x - (x % 10);
		x = x / 10;
		places++;
	}
	places++;
	return (places);
}

static char	findchar(int n, int places, int placeindex)
{
	int			i;
	long int	x;

	x = n;
	if (x < 0)
	{
		placeindex--;
		places--;
		x = x * -1;
	}
	i = 0;
	while (i < (places - placeindex - 1))
	{
		x = x - (x % 10);
		x = x / 10;
		i++;
	}
	return (48 + (x % 10));
}

char	*ft_itoa(int n)
{
	int		places;
	char	*number;
	int		i;

	places = findplaces(n);
	number = malloc(sizeof(char) * (places + 1));
	if (number == NULL)
	{
		return (NULL);
	}
	i = 0;
	if (n < 0)
	{
		number[i] = '-';
		i++;
	}
	while (i < places)
	{
		number[i] = findchar(n, places, i);
		i++;
	}
	number[i] = '\0';
	return (number);
}
