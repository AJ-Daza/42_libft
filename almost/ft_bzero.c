/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:20:54 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/24 14:23:27 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <strings.h>

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
int main(void)
{
    char	*s = "Quiero morirme";
	size_t	n = 6;
	size_t	l = 14;
	size_t	i = -1;

	printf("Original b zero: ");
	s = bzero(&s[0], n);
	while(++i < l)
	{
		printf("%c", s[i]);
		printf("\n");
	}

	s = "Puto bzero";
	printf("FT b zero:       ");
	s = ft_bzero(&s[0], n);
	i = -1;
	while(++i < l)
	{
		printf("%c", s[i]);
		printf("\n");
	}
    return(0);
}  
*/