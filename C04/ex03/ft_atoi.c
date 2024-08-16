/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/16 19:09:05 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/16 19:09:07 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	resultado;
	int	signo;

	resultado = 0;
	signo = 1;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			signo = -signo;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		resultado = resultado * 10 + (*str - '0');
		str++;
	}
	return (resultado * signo);
}
