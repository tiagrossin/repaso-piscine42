/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 12:48:57 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/09 12:49:00 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	srclng;

	i = 0;
	srclng = 0;
	while (i < (size - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
		srclng++;
	}
	while (src[i])
	{
		srclng++;
		i++;
	}
	dest[i + 1] = '\0';
	return (srclng);
}
