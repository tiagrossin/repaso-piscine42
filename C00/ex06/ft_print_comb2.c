/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 21:12:08 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/01 12:44:59 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnum(int n)
{
	int	temp;

	temp = n;
	if (n > 9)
	{
		n /= 10;
		n += '0';
		write (1, &n, 1);
	}
	else
	{
		write (1, "0", 1);
	}
	n = temp;
	n %= 10;
	n += '0';
	write (1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_putnum(i);
			write(1, " ", 1);
			ft_putnum(j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
