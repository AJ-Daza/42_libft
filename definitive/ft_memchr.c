/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:35:30 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/24 14:49:45 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	x;
	unsigned char	*t;

	t = (unsigned char *)s;
	x = (unsigned char)c;
	i = 0;
	while (i < n && t[i])
	{
		if (t[i] == x)
			return ((void *)&t[i]);
		i++;
	}
	return (NULL);
}

/*
int main(void)
{
    char	*a= "123";

	printf ("memchr(123, 2, 0): %p\n", memchr(a, '2', 0));
	printf ("FT(123, 2, 0):      %p\n\n", ft_memchr(a, '2', 0));

	printf ("memchr(123, 2, 3): %p\n", memchr(a, '2', 3));
	printf ("FT(123, 2, 3):      %p\n\n", ft_memchr(a, '2', 3));

	a = "";
	
	printf ("memchr( , 2, 1): %p\n", memchr(a, '2', 1));
	printf ("FT( , 2, 1):      %p\n\n", ft_memchr(a, '2', 1));

	return (0);
}
*/
