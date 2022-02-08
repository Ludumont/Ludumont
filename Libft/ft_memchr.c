/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:28:47 by ludumont          #+#    #+#             */
/*   Updated: 2022/02/08 14:17:34 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*b;
	unsigned char	d;

	b = (unsigned char *)s;
	d = (unsigned char)c;
	while (n-- > 0)
	{
		if (*b == d)
			return (b);
		b++;
	}
	return (NULL);
}
