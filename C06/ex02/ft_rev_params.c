/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 13:26:23 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/23 13:26:25 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char	**argv)
{
	int		i;
	char	*arg;

	i = argc - 1;
	while (i > 0)
	{
		arg = argv[i];
		while (*arg)
		{
			write (1, arg, 1);
			arg++;
		}
		write (1, "\n", 1);
		i--;
	}
	write (1, "\n", 1);
}
