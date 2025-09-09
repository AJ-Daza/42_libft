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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*bps;
	unsigned char	*bpd;

	if (dest == NULL && src == NULL)
		return (dest);
	bps = (unsigned char *)src;
	bpd = (unsigned char *)dest;
	if (dest < src)
	{
		while (n-- > 0)
			*bpd++ = *bps++;
	}
	else
	{
		while (n > 0)
		{
			n--;
			bpd[n] = bps[n];
		}
	}
	return (dest);
}

/*
int main(int    argc, char  **argv)
{
    if(argc != 3)
    {
        printf("argc Error\n");
        return(0);
    }

	char tdest[50];
    char    *tsrc = argv[1];
    size_t tn = atoi(argv[2]);
    ft_memmove(tdest, tsrc, tn );
    printf("%s\n", tdest);
    return(0);
}
*/