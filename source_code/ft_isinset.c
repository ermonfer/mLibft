/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isinset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 19:18:40 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/08 21:37:30 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isinchr(const char c, const char *str)
{
	while (*str != '\0')
	{
		if (c == *str++)
			return (1);
	}
	return (0);
}
