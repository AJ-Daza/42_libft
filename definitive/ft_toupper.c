/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:16:55 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 16:21:34 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
int	main(void)
{
	printf ("toupper(A): %c\n", toupper('A'));
	printf ("FT(A):      %c\n\n", ft_toupper('A'));

	printf ("toupper(z): %c\n", toupper('z'));
	printf ("FT(z):      %c\n\n", ft_toupper('z'));

	printf ("toupper(a): %c\n", toupper('a'));
	printf ("FT(a):      %c\n\n", ft_toupper('a'));

	printf ("toupper(3): %c\n", toupper('3'));
	printf ("FT(3):      %c\n\n", ft_toupper('3'));

	printf ("toupper(3500): %c\n", toupper(3500));
	printf ("FT(3500):      %c\n\n", ft_toupper(3500));

	printf ("toupper(0): %c\n", toupper(0));
	printf ("FT(0):      %c\n\n", ft_toupper(0));
	return (0);
}
*/