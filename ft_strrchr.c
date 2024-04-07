/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 02:51:38 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/18 02:59:36 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	while (length >= 0)
	{
		if (s[length] == (char)c)
		{
			return ((char *)(s + length));
		}
		length--;
	}
	return (NULL);
}
