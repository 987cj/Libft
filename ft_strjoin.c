/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 02:04:05 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/25 02:22:17 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		totallen;
	int		i;

	totallen = ft_strlen(s1) + ft_strlen(s2) + 1;
	string = malloc(sizeof(char) * totallen);
	if (string == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (*(s1 + i) != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	i = 0;
	while (*(s2 + i) != '\0')
	{
		string[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	string[ft_strlen(s1) + i] = '\0';
	return (string);
}
/*
int	main(void)
{
	printf("%s \n", ft_strjoin("abc", "def"));
	printf("%s \n", ft_strjoin("abcdef", "XYZ"));
	printf("%s \n", ft_strjoin("abc", " "));
	printf("%s \n", ft_strjoin("123", ""));
}
*/
