/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontero <fmontero@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 19:53:17 by fmontero          #+#    #+#             */
/*   Updated: 2024/04/11 19:53:29 by fmontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}	
	core_putnbr(n, fd);
}

void core_putnbr(int n, int fd)
{
	if (n > 9)
	{
		core_putnbr(n / 10, fd);
		write(fd, &((n % 10) + '0'), 1);
	}
	else
		write(fd, &(n + '0'), 1);
}
