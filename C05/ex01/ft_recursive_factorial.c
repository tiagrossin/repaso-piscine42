/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 18:40:43 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/19 18:40:45 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb == 0)
		nb = 1;
	if (nb < 0)
		nb = 0;
	if (nb > 1)
		nb *= ft_recursive_factorial(nb - 1);
	return (nb);
}
