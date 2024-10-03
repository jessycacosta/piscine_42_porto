/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessyca.costa <jessyca.costa@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:29:39 by jessyca.cos       #+#    #+#             */
/*   Updated: 2024/08/17 18:51:50 by jessyca.cos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    unsigned int i;
    unsigned int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;
    }
    j = 0;
    while (j < nb)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (dest);
}

/*#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc < 3)
    {
        printf("\n");
        return (1);
    }
    unsigned int n;
    n = 15;
    printf("%s\n", ft_strncat(argv[1], argv[2], n));
    return (0);
}*/