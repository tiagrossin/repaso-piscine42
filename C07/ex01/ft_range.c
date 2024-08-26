/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:47:48 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/26 11:47:51 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = (int *)malloc((max - min) * sizeof(int));
	if (!max)
		return (NULL);
	i = 0;
	max -= min;
	while (i < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}
