/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:53:06 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/02 15:53:08 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>
//#include<stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	int				j;	
	unsigned char	x;

	x = (unsigned char)c;
	i = 0;
	j = 0;
	if (*s == '\0' && c != 0)
		return (NULL);
	while (s[i])
	{
		if (s[i] == x)
			j = i;
		i++;
	}
	if (x == '\0')
		return ((char *)&s[i]);
	if (s[j] == x)
		return ((char *)&s[j]);
	return (NULL);
}

/*
int	main(int argc, char **argv)
{
	const char	*n;
	int	x;	

	if(argc != 3)
	{
		printf("argc Error\n");
		return (0);
	}
	n = argv[1];
	x = atoi(argv[2]);
	printf("%s\n", ft_strrchr(n, x));
	return (0);
}
*/