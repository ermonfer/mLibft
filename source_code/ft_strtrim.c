/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:42:39 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/08 22:39:00 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char const	*begin;

	while (ft_isinchr(*s1, set))
		s1++;
	if (s1 == '\0')
		return (strdup(s1));
	begin = s;
	while (*++s1 != '\0')
		;
	while (ft_isinchr(*--s1, set))
		;
	return (ft_substr(begin, 0, end - begin + 1));
}
