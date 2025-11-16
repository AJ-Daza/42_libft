/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 13:36:29 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/03/31 13:36:50 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stdio.h>
*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < size - 1 && size != 0)
	{
		dest[i] = src[i];
		i++;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[i])
	{
		i++;
	}
	return (i);
}

/*
int	main(void)
{
	char	original[] = "no se rick, parece falso" ;
	int	s = 11;
	char	copy[s];
	
	ft_strlcpy(copy, original, s);
	printf("%s", copy);

}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	length;

	i = 0;
	length = 0;
	while (src[i] && i < size - 1 && size != '\0')
	{
		dest[i] = src[i];
		i++;
		length++;
	}
	dest[i] = '\0';
	if (size == 0)
		return (length);
	while (src[i])
	{
		i++;
		length++;
	}
	return (length);
*/