/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiagrossin <marvin@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 15:16:18 by tiagrossi         #+#    #+#             */
/*   Updated: 2024/08/13 15:16:20 by tiagrossi        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strstr(char *str, char *to_find)
{
	char	*ptr1;
	char	*ptr2;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		ptr1 = str;
		ptr2 = to_find;
		while (*ptr1 == *ptr2 && *(ptr2 + 1) != '\0')
		{
			ptr1++;
			ptr2++;
		}
		if (*ptr1 == *ptr2)
			return (str);
		str++;
	}
	return (0);
}
