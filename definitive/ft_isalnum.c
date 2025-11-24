/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 13:51:17 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 14:02:51 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<ctype.h>
//#include<stdio.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57))
	{
		return (8);
	}
	else
		return (0);
}

/*
int	main(void)
{
	printf ("isalnum(0): %i\n", isalnum(0));
	printf ("FT(0):   %i\n\n", ft_isalnum(0));

	printf ("isalnum(-2): %i\n", isalnum(-2));
	printf ("FT(-2):   %i\n\n", ft_isalnum(-2));

	printf ("isalnum(47): %i\n", isalnum(47));
	printf ("FT(47):   %i\n\n", ft_isalnum(47));

	printf ("isalnum(48): %i\n", isalnum(48));
	printf ("FT(48):   %i\n\n", ft_isalnum(48));

	printf ("isalnum(57): %i\n", isalnum(57));
	printf ("FT(57):   %i\n\n", ft_isalnum(57));

	printf ("isalnum(58): %i\n", isalnum(58));
	printf ("FT(58):   %i\n\n", ft_isalnum(58));

	printf ("isalnum(65): %i\n", isalnum(65));
	printf ("FT(65):   %i\n\n", ft_isalnum(65));

	printf ("isalnum(97): %i\n", isalnum(97));
	printf ("FT(97):   %i\n\n", ft_isalnum(97));

	printf ("isalnum(98): %i\n", isalnum(98));
	printf ("FT(98):   %i\n\n", ft_isalnum(98));

	printf ("isalnum(200): %i\n", isalnum(200));
	printf ("FT(200):   %i\n\n", ft_isalnum(200));

	return(0);
}
*/
