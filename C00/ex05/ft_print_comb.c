/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 19:55:00 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/07/30 19:55:17 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int n)
{
	n = n + '0';
	write(1, &n, 1);
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i <= 7)
	{
		j = i + 1;
		while (j <= 8)
		{
			k = j + 1;
			while (k <= 9)
			{
				ft_putnum(i);
				ft_putnum(j);
				ft_putnum(k);
				if (i != 7)
					write(1, ", ", 2);
				k++;
			}
			j++;
		}
		i++;
	}
}
