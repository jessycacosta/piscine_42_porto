/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 18:08:12 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/04 18:35:09 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char r);

// Função para imprimir o topo e a base do retângulo
void	print_top_bottom(int x)
{
	int	col;

	col = 0;
	while (col < x)
	{
		if (col == 0)
			ft_putchar('A');
		else if (col == x - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
		col++;
	}
	ft_putchar('\n');
}

// Função para imprimir as laterais do retângulo
void	print_middle(int x, int y)
{
	int	row;
	int	col;

	row = 1;
	while (row < y - 1)
	{
		col = 0;
		while (col < x)
		{
			if (col == 0 || col == x - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		row++;
	}
}

// Função principal para desenhar o retângulo
void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	print_top_bottom(x);
	if (y > 1)
	{
		print_middle(x, y);
		print_top_bottom(x);
	}
}
