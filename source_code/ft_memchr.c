/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 23:56:38 by fmontero          #+#    #+#             */
/*   Updated: 2024/03/22 00:13:26 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	while (*s && n--)
	{
		if (*s == c)
			return ((void *)s);
		s++;
	}
	if (c == '\0')
		return ((void *)s);
	else
		return (NULL);
}
