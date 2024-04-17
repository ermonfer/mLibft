/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:01:55 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/17 15:48:20 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;
	unsigned char *us;

	us = (unsigned char *)s;
	r = NULL;
	while (*s != '\0')
	{
		if (*s == c)
			r = (char *)s;
		s++;
	}
	if (c == '\0')
		r = (char *)s;
	return (r);
}
