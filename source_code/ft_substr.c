/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 18:29:04 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/09 17:33:17 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "stdlib.h"

/* Devuelve una substring alocada que contiene una copia comenzando
 * por s[start] y de longitud len */

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	subs = malloc(len + 1);
	if (subs == NULL)
		return (NULL);
	s += start;
	i = 0;
	while (len-- && *s != '\0')
		subs[i++] = *s++;
	subs[i] = '\0';
	return (subs);
}
