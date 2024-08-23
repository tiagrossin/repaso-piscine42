/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 18:47:57 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/22 18:47:59 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**argv)
{
	int i;
	char *arg;

	i = 1;
	while (i < argc)
	{
		arg = argv[i];
		while (*arg)
		{
			write (1, arg, 1);
			arg++;
		}
		write (1, "\n", 1);
		i++;
	}
	write (1, &"\n", 1);
}
