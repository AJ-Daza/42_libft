/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:07:38 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/04 13:07:41 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
#include <stdlib.h>
*/

char	*ft_strdup(char *src)
{
	int		i;
	int		m;
	char	*copy;

	i = 0;
	m = 0;
	if (src == 0)
		return (0);
	while (src[i])
		i++;
	copy = malloc(i * sizeof(char) + 1);
	if (copy == 0)
		return (0);
	while (src[m])
	{
		copy[m] = src[m];
		m++;
	}
	copy[m] = '\0';
	return (copy);
}

/*
int	main (void)
{
	char *original = "No se rick, parece falso.";
	char *malloc_copy = ft_strdup(original);
	
	printf("%s", malloc_copy);
	free(malloc_copy);
	return (0);
}
*/
