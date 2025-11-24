/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:53:09 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/24 14:50:28 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*bps;
	unsigned char	*bpd;
	size_t			i;

	i = 0;
	if (dest == NULL && src == NULL)
		return (dest);
	bps = (unsigned char *)src;
	bpd = (unsigned char *)dest;
	if (dest < src)
	{
		while (i < n)
		{
			bpd[i] = bps[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			bpd[n] = bps[n];
	}
	return (dest);
}

/*
int main(void)
{
	char s[] = "Puta vida";
	char d[] = "xxxxxxxxxxxx";

    printf ("memchr(0): %s\n", (char *)memmove(d, s, 0));
	printf ("FT(0):     %s\n\n", (char *)ft_memmove(d, s, 0));

		
	printf ("memchr(7): %s\n", (char *)memmove(d, s, 7));
	printf ("FT(7):     %s\n\n", (char *)ft_memmove(d, s, 7));
}
*/