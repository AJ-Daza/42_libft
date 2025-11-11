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

static int	count(int x)
{
	int	i;

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

char	*ft_itoa(int n)
{
	char	*s;
	int		c;

	c = count(n);
	s = malloc(c + 1);
	if (s == NULL)
		return (NULL);
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[c] = '\0';
	c--;
	while (n > 0)
	{
		s[c] = n % 10;
		n = n / 10;
		c--;
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
		printf("%d", s[i]);
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
