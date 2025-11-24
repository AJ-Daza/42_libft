/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 16:00:34 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 16:01:07 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<ctype.h>
//#include<stdio.h>

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (16384);
	else
		return (0);
}

/*
int     main(void)
{
    printf ("isprint(0): %i\n", isprint(0));
	printf ("FT(0):      %i\n\n", ft_isprint(0));

    printf ("isprint(31): %i\n", isprint(31));
	printf ("FT(31):      %i\n\n", ft_isprint(31));

    printf ("isprint(32): %i\n", isprint(32));
	printf ("FT(32):      %i\n\n", ft_isprint(32));

    printf ("isprint(126): %i\n", isprint(126));
	printf ("FT(126):      %i\n\n", ft_isprint(126));

    printf ("isprint(128): %i\n", isprint(128));
	printf ("FT(128):      %i\n\n", ft_isprint(128));

    return(0);
}
*/
