/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:03:43 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/11 13:44:00 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*#include <stdio.h>

int	main(void)
{
	int	a = 10;
	int	b = 2;
	int	div = 1;
	int	mod = 0;

	ft_div_mod(a, b, &div, &mod);
	printf("div: %d mod:%d \n", div, mod);
	return (0);
}*/
