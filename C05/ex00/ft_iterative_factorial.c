/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:04:18 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/18 21:40:12 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	factorial = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 1)
	{
		nb--;
		factorial = factorial * nb;
	}
	return (factorial);
}

/*int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		return (1);
	}
	int	number;
	
	number = atoi(argv[1]);
	printf("%d\n", ft_iterative_factorial(number));
	return (0);
}*/
