/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:56:11 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/08 20:02:47 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	ft_isdigit(int c)
{
	unsigned char	uc;

	uc = (unsigned char)c;
	if (c == EOF)
		return (0);
	return (uc >= '0' && uc <= '9');
}
