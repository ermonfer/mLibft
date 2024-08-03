/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 15:41:33 by fmontero          #+#    #+#             */
/*   Updated: 2024/08/02 20:26:24 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	lens1;
	size_t	lens2;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	new = malloc(lens1 + lens2 + 1);
	if (new == NULL)
		return (NULL);
	ft_memcpy(new, s1, lens1);
	ft_memcpy(new + lens1, s2, lens2);
	new[lens1 + lens2] = '\0';
	return (new);
}
