/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 09:44:58 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/26 09:45:00 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	char	*ptr;
	int	i;

	ptr = str;
	i = 0;
	while (*ptr++)
		i++;
	return (i);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = malloc(ft_strlen(src) + 1);
	if (!new_str)
		return NULL;
	return (ft_strcpy(new_str, src));
}
