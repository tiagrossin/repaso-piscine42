/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 08:55:52 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/09 08:55:55 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	is_alpha(char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

char	*ft_strcapitalize(char *str)
{
	int	is_cap;

	is_cap = 1;
	while (*str)
	{
		if ((*str >= 'a' && *str <= 'z') && is_cap)
		{
			*str -= 32;
			is_cap = 0;
		}
		else if ((*str >= 'A' && *str <= 'Z') && !is_cap)
		{
			*str += 32;
		}
		if (!((is_alpha(*str)) || (*str >= '0' && *str <= '9')))
			is_cap = 1;
		else
			is_cap = 0;
		str++;
	}
	return (str);
}
