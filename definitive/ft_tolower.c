/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:08:23 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 16:17:27 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <ctype.h>
//#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

/*
int	main(void)
{
	printf ("tolower(A): %c\n", tolower('A'));
	printf ("FT(A):      %c\n\n", ft_tolower('A'));

	printf ("tolower(Z): %c\n", tolower('Z'));
	printf ("FT(Z):      %c\n\n", ft_tolower('Z'));

	printf ("tolower(a): %c\n", tolower('a'));
	printf ("FT(a):      %c\n\n", ft_tolower('a'));

	printf ("tolower(3): %c\n", tolower('3'));
	printf ("FT(3):      %c\n\n", ft_tolower('3'));

	printf ("tolower(0): %c\n", tolower(0));
	printf ("FT(0):      %c\n\n", ft_tolower(0));
	return (0);
}
*/
