/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:07:06 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/12 11:25:58 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = tab[size - 1];
		tab[size - 1] = swap;
		i++;
		size--;
	}
}
/*#include <stdio.h>
int	main(void)
{
	int	tab1[] = {1, 2, 3, 4, 5, 6, 7};
	int	size1 = 7;
	ft_rev_int_tab(tab1, size1);
	
	int	i;
	i = 0;
	while (i < size1)
	{ 
		printf("%d", tab1[i]);
		i++;
	}
	return (0);
}*/
