/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:18:34 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/01 19:18:36 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include<stdio.h>
#include<bsd/string.h>
*/

/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ld;
	unsigned int	ls;
	unsigned int	fl;

	i = 0;
	ld = ft_strlen(dest);
	ls = ft_strlen(src);
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

/*
int main (void)
{
	char a[10] = "Hello, ";
	char b[]="World!";
	
	printf(" %u", ft_strlcat(a, b , 7));
	printf(" %s\n", a);
		
	char c[10] = "Hello, ";
	char d[]="World!";
	
	printf(" %zu", strlcat(c, d , 7));
	printf(" %s\n", c);
	
}
*/
