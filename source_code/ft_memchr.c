/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 23:56:38 by fmontero          #+#    #+#             */
/*   Updated: 2024/03/23 16:31:48 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{	
	const unsigned char *r = (unsigned char*)s;
	unsigned char ch = (unsigned char)c;

	while (n--)
	{
		if (*r == ch)
			return ((void *)r);
		r++;
	}
		return (NULL);
}
