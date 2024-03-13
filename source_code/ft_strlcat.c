/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:28:04 by fmontero          #+#    #+#             */
/*   Updated: 2024/03/13 22:28:14 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	while (dst[i])
		i += 1;
	while (*src && i < dstsize - 1)
		dst[i++] = *src++;
	if (i < dstsize)
		dst[i] = '\0';
	while (*src++)
		i += 1;
	return (i);
}
