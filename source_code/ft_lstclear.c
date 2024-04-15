/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 00:18:00 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/12 00:21:43 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL || *lst ==NULL)
		return ;
	ft_lstclear(&(*lst) -> next, del);
	(del)((*lst) -> content);
	free(*lst);
	*lst = NULL;
}

