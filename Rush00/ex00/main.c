/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecosta <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 11:18:55 by jecosta           #+#    #+#             */
/*   Updated: 2024/08/04 18:23:49 by jecosta          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern	void	rush(int x, int y);
extern	void	ft_putchar(char r);

int	main(void)
{
	rush(5, 3);
	return (0);
}
