/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessyca.costa <jessyca.costa@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 20:22:18 by jessyca.cos       #+#    #+#             */
/*   Updated: 2024/08/17 23:00:28 by jessyca.cos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int size_src;
    unsigned int last_char_dest;

    size_src = 0;
    last_char_dest = 0;
    while (src[size_src] != '\0') 
        size_src++;
    while (dest[last_char_dest] != '\0')
        last_char_dest++;
    unsigned int i;
    unsigned int j;

    i = last_char_dest;
    j = 0;
    while (i < (last_char_dest + size_src) && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++; 
    }
    dest[i] = '\0';
    return (last_char_dest + size_src);
}

/*int main(void)
{
    char dest[15] = "Hello, ";
    char src[] = "World!";
    int result;
    result = ft_strlcat(dest, src, sizeof(dest));
    printf("%d\n", result);
    printf("%s\n", dest);
    return (0);
}*/