/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:46:51 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 15:34:46 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	finddigits(long int n)
{
	int			places;

	places = 0;
	while (!(n < 10))
	{
		n = n - (n % 10);
		n = n / 10;
		places++;
	}
	places++;
	return (places);
}

static char	findchar(long int n, int digits, int index)
{
	int			i;

	i = 0;
	while (i < (digits - index - 1))
	{
		n = n - (n % 10);
		n = n / 10;
		i++;
	}
	return (48 + (n % 10));
}

void	ft_putnbr_fd(int n, int fd)
{
	char		num;
	int			digits;
	int			i;
	long int	x;

	x = n;
	if (x < 0)
	{
		write(fd, "-", 1);
		x = x * -1;
	}
	digits = finddigits(x);
	i = 0;
	while (i < digits)
	{
		num = findchar(x, digits, i);
		write(fd, &num, 1);
		i++;
	}
}
