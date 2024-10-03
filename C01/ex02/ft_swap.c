/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:02:32 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/08 19:39:50 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swapped;

	swapped = *a;
	*a = *b;
	*b = swapped;
}

/*#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 0;
	y = 42;
	printf("%d %d \n", x, y);
	ft_swap(&x, &y);
	printf("%d %d \n", x, y);
	return (0);
}*/
