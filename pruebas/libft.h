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

#ifndef LIBFT_H
# define LIBFT_H

/**************************/
/*      INCLUDES          */
/**************************/
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

/**************************/
/*      FUNCTIONS         */
/**************************/

//char	*ft_itoa(int n);
void	*ft_calloc(size_t nmemb, size_t size);
char	**ft_split(char const *s, char c);

#endif
