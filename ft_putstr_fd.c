/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 17:38:10 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/26 17:41:08 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	length;
	int	i;

	length = ft_strlen(s);
	i = 0;
	while (i < length)
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}
