/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 15:32:27 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/15 15:35:02 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_lstclear(t_list **lst, void (*del)(*void))
{
	t_list		*node;

	while (*lst != NULL)
	{
		node = *lst;
		*lst = *lst -> next;
		del(node -> content);
		free(node);
	}
}
