/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 16:13:56 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/24 16:18:08 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<string.h>

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	if (*s == '\0' && c != 0)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == x)
			return ((char *)&s[i]);
		i++;
	}
	if (x == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*
int main(void)
{
    char	*a= "123";

	printf ("strchr(123, 4: %p\n", strchr(a, '4'));
	printf ("FT(123, 4):      %p\n\n", ft_strchr(a, '4'));

	printf ("strchr(123, 2): %p\n", strchr(a, '2'));
	printf ("FT(123, 2):      %p\n\n", ft_strchr(a, '2'));

	a = "";
	
	printf ("strchr( , 2): %p\n", strchr(a, '2'));
	printf ("FT( , 2):      %p\n\n", ft_strchr(a, '2'));

	return (0);
}
*/