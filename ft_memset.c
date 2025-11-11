/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:07:38 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/04 13:07:41 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <stddef.h>

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*bytepointer;

	i = 0;
	bytepointer = s;
	while (i < n)
	{
		bytepointer[i] = c;
		i++;
	}
	return (s);
}

/*
int main(int    argc, char  **argv)
{
    if(argc != 4)
    {
        printf("argc Error\n");
        return(0);
    }
    char    *tstr = argv[1];
    int tc = atoi(argv[2]);
    size_t tn = atoi(argv[3]);
    ft_memset(tstr, tc, tn );
    printf("%s\n", tstr);
    return(0);
}
*/
