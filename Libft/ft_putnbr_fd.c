/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 17:17:45 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 17:36:44 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putendl_fd("2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd((n + '0'), fd);
	}
	if (n >= 10)
	{
		if ((n / 10) >= 1)
			ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
