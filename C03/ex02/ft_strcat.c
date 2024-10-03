/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessyca.costa <jessyca.costa@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:40:26 by jessyca.cos       #+#    #+#             */
/*   Updated: 2024/08/17 17:28:49 by jessyca.cos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strcat(char *dest, char *src)
{
    int i;
    int j;

    i = 0;
    while (dest[i] != '\0')
    {
        i++;        
    }
    j = 0;
    while (src[j] != '\0')
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return(dest);
}

/*#include <stdio.h>

int    main(int argc, char *argv[])
{
    if (argc < 3)
    {
        printf("\n");
        return (1);
    }
    printf("%s\n", ft_strcat(argv[1], argv[2]));
    return (0);
}*/