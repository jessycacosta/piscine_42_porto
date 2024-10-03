/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:54:51 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/19 16:43:57 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
	{
		return (0);
	}
	else if (power == 0)
	{
		return (1);
	}
	else
		result = nb * ft_recursive_power(nb, power - 1);
	return (result);
}

/*int	main(int argc, char **argv)
{	
	int	num_1 = atoi(argv[1]);
	int	num_2 = atoi(argv[2]);	
	if (argc == 3)
		printf("%d\n", ft_recursive_power(num_1, num_2));
	return (0);
}*/
