/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:53:06 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/02 15:53:08 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*nm;
	size_t	i;

	nm = malloc(nmemb * size);
	if (nm == NULL)
		return (NULL);
	i = 0;
	while (i < (nmemb * size))
	{
		nm[i] = '\0';
		i++;
	}
	return ((void *)nm);
}
