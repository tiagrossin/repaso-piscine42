/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 19:40:16 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/19 19:40:19 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{	
	int result;
	if (power < 0)
		return(0);
	result = 1;
	while (power-- > 0)
		result *= nb;
	return (result);
}
