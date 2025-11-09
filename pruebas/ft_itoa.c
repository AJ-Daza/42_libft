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





/*
Function name: ft_itoa

Prototype: char *ft_itoa(int n);

Parameters: n: the integer to convert.

Return value:The string representing the integer. NULL if the allocation fails.

External functs: malloc

Description: Allocates (with malloc(3)) and returns a string representing the
integer received as an argument. Negative numbers must be handled.
*/