/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 16:32:21 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/12 16:32:25 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar_dectohex(unsigned char c)
{
	char	hex[2];
	char	*base;

	base = "0123456789abcdef";
	hex[0] = base[c / 16];
	hex[1] = base[c % 16];
	write(1, "\\", 1);
	write(1, &hex[0], 1);
	write(1, &hex[1], 1);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str < 32)
			ft_putchar_dectohex((unsigned char)*str);
		else
			write(1, &*str, 1);
		str++;
	}
}
