/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:27:27 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 14:52:37 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_signe(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int s;
	long int v;

	s = 1;
	v = 0;
	while (*str && (*str == '\n' || *str == '\t' || *str == '\r' 
		|| *str == ' ' || *str == '\f' || *str == '\v'))
		str++;
	if (ft_signe(*str) && *str)
	{
		if (*str == '-')
			s *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		v = (v * 10) + (*str - '0'); 
		str++;
	}
	return (v * s);
}

/*
int main (void)
{
	const char *str = "  -         254fff5    ";
	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str));
	return (0);
}
*/