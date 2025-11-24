/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:07:38 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/17 14:22:35 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<ctype.h>
//#include<stdio.h>

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (2048);
	else
		return (0);
}

/*
int     main(void)
{
    printf ("isdigit(0): %i\n", isdigit(0));
	printf ("FT(0):      %i\n\n", ft_isdigit(0));

    printf ("isdigit(47): %i\n", isdigit(47));
	printf ("FT(47):      %i\n\n", ft_isdigit(47));

    printf ("isdigit(48): %i\n", isdigit(48));
	printf ("FT(48):      %i\n\n", ft_isdigit(48));

    printf ("isdigit(57): %i\n", isdigit(57));
	printf ("FT(57):      %i\n\n", ft_isdigit(57));

    printf ("isdigit(58): %i\n", isdigit(58));
	printf ("FT(58):      %i\n\n", ft_isdigit(58));

    return(0);
}
*/
