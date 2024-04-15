/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
<<<<<<< HEAD
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:25:27 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/15 14:17:24 by fmontero         ###   ########.fr       */
=======
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 00:18:00 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/12 00:21:43 by fmontero         ###   ########.fr       */
>>>>>>> b785db0a2f3babd23aa98de839e6fac06ea89aa8
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
<<<<<<< HEAD
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
=======

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	if (lst == NULL || del == NULL || *lst ==NULL)
		return ;
	ft_lstclear(&(*lst) -> next, del);
	(del)((*lst) -> content);
	free(*lst);
	*lst = NULL;
}

>>>>>>> b785db0a2f3babd23aa98de839e6fac06ea89aa8
