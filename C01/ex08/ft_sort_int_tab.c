/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 12:08:05 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/12 11:23:12 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	temp;

	a = 0;
	while (a < size)
	{
		b = a + 1;
		while (b < size)
		{
			if (tab[a] > tab[b])
			{
				temp = tab[a];
				tab[a] = tab[b];
				tab[b] = temp;
			}
			b++;
		}
		a++;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	tab1[] = {5, 6, 7 , 8, 2, 1, 4, 3};
	int	size1;

	size1 = 8;
	int	i;
	i = 0;
	while (i < size1)
	{
		printf("%d", tab1[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(tab1, size1);
	i = 0;
	while (i < size1)
	{
		printf("%d", tab1[i]);
		i++;
	}
	return (0);
}*/
