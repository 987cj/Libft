/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 03:02:06 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/18 10:40:42 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned long int	i;

	i = 0;
	while (!(*(s1 + i) == '\0' && *(s2 + i) == '\0'))
	{
		if (i >= n)
		{
			break ;
		}
		if (*(s1 + i) - *(s2 + i) != 0)
		{
			return ((unsigned char)(s1[i]) - (unsigned char)(s2[i]));
		}
		i++;
	}
	return (0);
}
