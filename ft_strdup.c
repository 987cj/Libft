/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmartyr <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 03:39:26 by cmartyr           #+#    #+#             */
/*   Updated: 2023/07/24 03:49:21 by cmartyr          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strdup(const char *s1)
{
	char	*dupe;
	int		length;
	int		i;

	length = ft_strlen(s1);
	dupe = malloc(sizeof(char) * (length + 1));
	i = 0;
	while (*(s1 + i) != '\0' && dupe != NULL)
	{
		*(dupe + i) = *(s1 + i);
		i++;
	}
	if (dupe != NULL)
	{
		*(dupe + i) = '\0';
	}
	return (dupe);
}
/*
int	main(void)
{
	char	src[] = "ABCD 123 []";
	char	*a;
	char	*b;

	a = strdup(src);
	b = ft_strdup(src);
	printf("%s \n", a);
	printf("%s", b);

	free(a);
	free(b);
}
*/
