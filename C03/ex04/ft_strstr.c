/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessyca.costa <jessyca.costa@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 19:16:09 by jessyca.cos       #+#    #+#             */
/*   Updated: 2024/08/17 20:21:14 by jessyca.cos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
    int i;
    int j;
    char *str_sub;

    i = 0;
    j = 0;
    str_sub = 0;
    if (to_find[0] == '\0')
    {
        return (str);
    }
    while (str[i] != '\0')
    {
        if (str[i] == to_find[j])
        {
            if (to_find[j + 1] == '\0')
            {
                str_sub = &str[i - j];
                return (str_sub);
            }
            j++;
        }
        else
            j = 0; 
        i++;
    }
    return (str_sub);
}

/*#include <stdio.h>

int main(int argc, char **argv)
{
    if(argc < 3)
    {
        printf("\n");
        return (1);
    }
    printf("%s\n", ft_strstr(argv[1], argv[2]));
    return (0);
}*/