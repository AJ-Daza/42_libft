/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:34:01 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/24 14:23:04 by adaza-ru         ###   ########.fr       */
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
