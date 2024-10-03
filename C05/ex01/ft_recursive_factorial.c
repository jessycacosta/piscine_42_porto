/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:41:44 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/19 14:43:50 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
	{
		return (0);
	}
	else if (nb == 0 || nb == 1)
	{
		return (1);
	}
	else
	{
		nb = nb * ft_recursive_factorial(nb - 1);
	}
	return (nb);
}

/*int	main(int argc, char **argv)
{
	if (argc < 2)
		return (1);
	int	number;

	number = atoi(argv[1]);
	printf("%d\n", ft_recursive_factorial(number));
	return (0);
}*/
