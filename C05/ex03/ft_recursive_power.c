/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 20:33:28 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/19 20:33:35 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		nb = 0;
	if (power == 0)
		nb = 1;
	if (power > 1)
		nb *= ft_recursive_power(nb, (power - 1));
	return (nb);
}
