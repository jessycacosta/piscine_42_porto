/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 11:36:45 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/14 11:51:13 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 32 && str[i] <= 126) || (str[i] >= 0 && str[i] <= 9))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "*()#$@!";
	printf("%d \n", ft_str_is_printable(str));
	return (0);
}*/
//1 printable
//1 empty
//0 others
