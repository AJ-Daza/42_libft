/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:10:09 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 14:13:57 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<ctype.h>
//#include<stdio.h>

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int     main(void)
{
    printf ("isascii(0): %i\n", isascii(0));
	printf ("FT(0):      %i\n\n", ft_isascii(0));

    printf ("isascii(-2): %i\n", isascii(-2));
	printf ("FT(-2):      %i\n\n", ft_isascii(-2));

    printf ("isascii(57): %i\n", isascii(57));
	printf ("FT(57):      %i\n\n", ft_isascii(57));

    printf ("isascii(127): %i\n", isascii(127));
	printf ("FT(127):      %i\n\n", ft_isascii(127));

    printf ("isascii(128): %i\n", isascii(128));
	printf ("FT(128):      %i\n\n", ft_isascii(128));
    
    return(0);
}
*/