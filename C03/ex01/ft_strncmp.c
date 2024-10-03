/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessyca.costa <jessyca.costa@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:26:30 by jessyca.cos       #+#    #+#             */
/*   Updated: 2024/08/15 17:15:17 by jessyca.cos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while (i < n && s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2 [i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i < n)
        return (s1[i] - s2[i]);
    return (0);
}

/*int main(int argc, char *argv[])
{
    if (argc < 4)
    {
        printf("São necessários 3 argumentos: \n");
        return (0);
    }
    unsigned int n = *argv[3] - '0';
    printf("%d\n", n);
    printf("%d\n", ft_strncmp(argv[1], argv[2], n));
    return (0);
}*/