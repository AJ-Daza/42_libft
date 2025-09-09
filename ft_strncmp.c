/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 13:24:43 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/01 13:24:45 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				dif;

	i = 0;
	dif = 0;
	while ((s1[i] || s2[i]) && dif == 0 && i < n)
	{
		dif = s1[i] - s2[i];
		i++;
	}
	return (dif);
}

/*
int	main(void)
{
	char *s1 = "12345678";
	char *s2 = "12345h78";
	unsigned int length = 5;
	
	ft_strncmp(s1, s2, length);
	printf("%d", ft_strncmp(s1, s2, length));
}
*/
