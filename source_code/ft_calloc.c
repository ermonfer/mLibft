/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 19:05:45 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/04 19:20:36 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

 void	*ft_calloc(size_t count, size_t size)
 {
	 void	*ptr;

	 ptr = malloc(count * size);
	 ft_memset(ptr, 0, count * size);
	 return (ptr);
 }
