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
//#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ns;
	int		x;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	ns = malloc(sizeof(char) * (x + y + 1));
	if (ns == NULL)
		return (NULL);
	x = -1;
	y = -1;
	while (s1[++x] != '\0')
		ns[x] = s1[x];
	while (s2[++y] != '\0')
		ns[x + y] = s2[y];
	ns[x + y] = '\0';
	return (ns);
}

/*
int	main(void)
{
	char const	*a = "Tus ";
	char const	*b = "Muertos.";
	char *ab = ft_strjoin(a, b);
	printf("%s\n", ab);
	free (ab);
	return (0);
}
*/

/*
Function name: ft_strjoin

Prototype: char *ft_strjoin(char const *s1, char const *s2);

Parameters: s1: The prefix string.
s2: The suffix string.

Return value: The new string. NULL if the allocation fails.

External functs: malloc

Description: Allocates (with malloc(3)) and returns a new string, which is 
the result of the concatenation of ’s1’ and ’s2’.
*/