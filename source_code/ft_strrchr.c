/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:01:55 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/07 13:24:33 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*r;

	r = NULL;
	while (*s)
	{
		if (*s == c)
			r = (char *)s;
		s++;
	}
	if (c == '\0')
		r = (char *)s;
	return (r);
}
