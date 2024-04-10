/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:21:02 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/10 12:49:07 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_len(int n);

char	*ft_itoa(int n)
{
	char	*result;
	int		len;

	len = get_len(n);
	result = (char *)malloc(len);
	if (result == NULL)
		return (NULL);
	result[--len] = '\0';
	if (n == 0)
		result[0] = '0';
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (result);
}

static int	get_len(int n)
{
	int		i;

	i = 1;
	if (n == 0)
		return (++i);
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}
