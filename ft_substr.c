/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 01:50:30 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/28 15:20:43 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*string;
	unsigned long int	i;

	if (*s == '\0' || start > ft_strlen(s))
		len = 0;
	else if (len > ft_strlen(s))
		len = ft_strlen(s);
	string = malloc(sizeof(char) * (len + 1));
	if (!(string))
		return (NULL);
	if (*s == '\0' || start > ft_strlen(s))
	{
		string[0] = '\0';
		return (string);
	}
	i = 0;
	while (s[start + i] != '\0' && i < len)
	{
		string[i] = s[start + i];
		i++;
	}
	if (string[i] != '\0')
		string[i] = '\0';
	return (string);
}
