/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 19:56:17 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/07/29 19:56:21 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	letter;

	letter = 97;
	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter++;
	}
}
