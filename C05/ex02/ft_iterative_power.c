/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 08:56:43 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/19 14:52:59 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0 && nb == 0)
		return (1);
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return (result);
}

/*int	main(int argc, char **argv)
{
	if (argc < 3)
	{
		return (1);
	}
	int	nb;
	int	power;
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("%d\n", ft_iterative_power(nb, power));
	return (0);
}*/
