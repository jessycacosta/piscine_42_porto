/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:23:23 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/14 19:34:29 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			if ((i == 0) || (!((str[i - 1] >= 'a' && str[i - 1] <= 'z') \
						|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z') \
			|| (str[i - 1] >= '0' && str[i - 1] <= '9'))))
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s\n", ft_strcapitalize(str));
	return (0);
}*/
