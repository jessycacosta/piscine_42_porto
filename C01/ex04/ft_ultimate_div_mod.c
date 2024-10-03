/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:04:38 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/12 11:25:09 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*#include <stdio.h>

int	main(void)
{
	int	a = 42; 
	int	b = 8;
	printf("before div: %d before mod: %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("div: %d mod:%d \n", a, b);
	return (0);
}*/
