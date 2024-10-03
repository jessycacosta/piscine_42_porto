/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jessyca.costa <jessyca.costa@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 15:45:11 by jessyca.cos       #+#    #+#             */
/*   Updated: 2024/08/15 16:16:30 by jessyca.cos      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (s1[i] - s2[i]);    
}

/*int main(void)
{
    char s1[] = "Hello Pitchuko";
    char s2[] = "Hello";
    printf("%d\n", ft_strcmp(s1, s2));
    return (0);
}*/
