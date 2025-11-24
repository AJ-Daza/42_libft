/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:04:24 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 14:09:40 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<ctype.h>
//#include<stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1024);
	else
		return (0);
}

/*
int     main(void)
{
    printf ("isalpha(0): %i\n", isalpha(0));
	printf ("FT(0):      %i\n\n", ft_isalpha(0));

    printf ("isalpha(-2): %i\n", isalpha(-2));
	printf ("FT(-2):      %i\n\n", ft_isalpha(-2));

    printf ("isalpha(64): %i\n", isalpha(64));
	printf ("FT(64):      %i\n\n", ft_isalpha(64));

    printf ("isalpha(65): %i\n", isalpha(65));
	printf ("FT(65):      %i\n\n", ft_isalpha(65));

    printf ("isalpha(98): %i\n", isalpha(98));
	printf ("FT(98):      %i\n\n", ft_isalpha(98));

    printf ("isalpha(200): %i\n", isalpha(200));
	printf ("FT(200):      %i\n\n", ft_isalpha(200));

    return(0);
}
*/
