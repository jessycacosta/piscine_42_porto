/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 11:04:01 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/05 11:38:30 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char j)
{
	write(1, &j, 1);
}

void	ft_print_numbers(void)
{
	char	j;

	j = '0';
	while (j <= '9')
	{
		ft_putchar(j);
		j++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
