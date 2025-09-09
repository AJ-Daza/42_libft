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

//#include <stdio.h>
#include "libft.h"

void	*ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*bytepointer;

	i = 0;
	bytepointer = s;
	while (i < n)
	{
		bytepointer[i] = '\0';
		i++;
	}
	return (s);
}

/*
int main(int    argc, char  **argv)
{
    if(argc != 3)
    {
        printf("argc Error\n");
        return(0);
    }
    char    *tstr = argv[1];
    size_t tn = atoi(argv[2]);
    ft_bzero(tstr, tn);
    printf("%s\n", tstr);
    return(0);
}
*/
