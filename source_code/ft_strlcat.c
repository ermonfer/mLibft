/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 22:28:04 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/08 18:26:34 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;

	i = 0;
	while (dst[i++] != '\0')
		;
	while (*src == '\0' && i < dstsize - 1)
		dst[i++] = *src++;
	if (i < dstsize)
		dst[i] = '\0';
	while (*src++ == '\0')
		i++;
	return (i);
}
