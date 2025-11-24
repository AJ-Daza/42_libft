/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:25:27 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/20 19:25:27 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void ft_lstadd_front(t_list **lst, t_list *new);

Parameters: lst: a list.The address of a pointer to the first link of a list
new: The address of a pointer to the node to be added to the list.

Return value: The new node

External functs: malloc

Description: Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with the value 
of the parameter ’content’. The variable ’next’ is initialized
to NULL.
*/