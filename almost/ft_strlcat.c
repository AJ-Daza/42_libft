/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:18:34 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/24 17:14:29 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>
#include <bsd/string.h>

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	fl;

	i = 0;
	ld = (unsigned int)ft_strlen(dest);
	ls = (unsigned int)ft_strlen(src);
	if (size <= ld)
		fl = size + ls;
	else
		fl = ld + ls;
	while (src[i] && ld + 1 < size)
	{
		dest[ld] = src[i];
		i++;
		ld++;
	}
	dest[ld] = '\0';
	return (fl);
}


int main (void)
{
	char a[10] = "Hello, ";
	char b[]="World!";
	
	printf(" FT: %u", ft_strlcat(a, b , 1));
	printf(" %s\n", a);
	
	
}

