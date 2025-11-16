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

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*bps;
	unsigned char	*bpd;

	if (dest == NULL && src == NULL)
		return (dest);
	i = 0;
	bps = (unsigned char *)src;
	bpd = (unsigned char *)dest;
	while (i < n)
	{
		bpd[i] = bps[i];
		i++;
	}
	return (bpd);
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
    ft_memcpy(tdest, tsrc, tn );
    printf("%s\n", tdest);
    return(0);
}
*/
