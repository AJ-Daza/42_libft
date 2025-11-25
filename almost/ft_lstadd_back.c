/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:31:01 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/20 19:31:01 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{

	t_list	*ptr;

	if (!lst || !new)
		return;
	ptr = lst[0];
	while(ptr->next != NULL)
		ptr = ptr->next;
	ptr->next = new;
}

/*
void ft_lstadd_back(t_list **lst, t_list *new);

Parameters: lst: a list.The address of a pointer to the first link of
new: The address of a pointer to the node to be added to the list.

Return value: None

External functs: None

Description: Adds the node ’new’ at the end of the list.
*/