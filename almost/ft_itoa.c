/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:37:02 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/11 14:37:15 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static long	count(long x)
{
	long	i;

	i = 0;
	if (x < 0)
	{
		i++;
		x = -x;
	}
	while (x > 0)
	{
		x = (x / 10);
		i++;
	}
	return (i);
}

static char	*zero(void)
{
	char	*ns;

	ns = malloc(2);
	if (!ns)
		return (NULL);
	ns[0] = '0';
	ns[1] = '\0';
	return (ns);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		c;
	long	num;

	if (n == 0)
		return (zero());
	num = n;
	c = count(num);
	s = malloc(c + 1);
	if (s == NULL)
		return (NULL);
	if (num < 0)
	{
		s[0] = '-';
		num = -num;
	}
	s[c] = '\0';
	while (num > 0)
	{
		s[--c] = (num % 10) + '0';
		num = num / 10;
	}
	return (s);
}

/*
int	main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	char	*s = ft_itoa(n);
	int i = 0;
	
	if (argc != 2)
	{
		printf("argc Error");
		return(1);
	}
	printf("String final: ");
	while (s[i])
	{
		if (s[i] == '-')
		{
			printf("-");
			i++;
		}
		printf("%c", s[i]);
		i++;
	}
	printf("\n");
	return (0);	
}
*/

/*
Function name: ft_itoa

Prototype: char *ft_itoa(int n);

Parameters: n: the integer to convert.

Return value:The string representing the integer. NULL if the allocation fails.

External functs: malloc

Description: Allocates (with malloc(3)) and returns a string representing the
integer received as an argument. Negative numbers must be handled.
*/
