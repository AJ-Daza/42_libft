/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 15:27:55 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 10:59:25 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	sign;
	int	i;
	int	value;

	sign = 1;
	i = 0;
	value = 0;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == 43 || str[i] == 45)
	{
		if (str[i] == 45)
			sign = -sign;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		value = (value * 10) + (str[i] - '0');
		i++;
	}
	return (sign * value);
}

/*
int	main(void)
{
	printf ("Atoi(0): %i\n", atoi("0"));
	printf ("FT(0):   %i\n\n", ft_atoi("0"));

	printf ("Atoi(42): %i\n", atoi("42"));
	printf ("FT(42):   %i\n\n", ft_atoi("42"));

	printf ("Atoi(-42): %i\n", atoi("-42"));
	printf ("FT(-42):   %i\n\n", ft_atoi("-42"));

	printf ("Atoi(2147483647): %i\n", atoi("2147483647"));
	printf ("FT(2147483647):   %i\n\n", ft_atoi("2147483647"));

	printf ("Atoi(-2147483648): %i\n", atoi("-2147483648"));
	printf ("FT(-2147483648):   %i\n\n", ft_atoi("-2147483648"));

	printf ("Atoi(2147483648): %i\n", atoi("2147483648"));
	printf ("FT(2147483648):   %i\n\n", ft_atoi("2147483648"));

	printf ("Atoi(-2147483649): %i\n", atoi("-2147483649"));
	printf ("FT(-2147483649):   %i\n\n", ft_atoi("-2147483649"));

	printf ("Atoi(""): %d\n", atoi(""));
	printf ("FT(""):   %d\n\n", ft_atoi(""));

	return(0);
}
*/
