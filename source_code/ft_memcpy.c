/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 16:48:02 by fmontero          #+#    #+#             */
/*   Updated: 2024/03/11 17:42:05 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned char		*s;

	d = dst;
	s = src;
	while (n--)
		dst++ = src++;
	return (dst);
}
