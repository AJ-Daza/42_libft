/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:53:06 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/02 15:53:08 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<stdlib.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*t;

	t = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (t[i] == x)
			return ((void *)&t[i]);
		i++;
	}
	return (NULL);
}

/*
int main(int argc, char **argv)
{
    const char *n;
    int x;
    char *result;

    if (argc != 3)
    {
        printf("Usage: %s <string> <character_code>\n", argv[0]);
        return (1);
    }
    
    n = argv[1];
    x = atoi(argv[2]); // Convert argument to integer
    
    result = ft_strchr(n, x);
    
    if (result == NULL)
    {
        printf("Character not found in string\n");
    }
    else
    {
        printf("Found: %s\n", result);
    }
    
    return (0);
}
*/