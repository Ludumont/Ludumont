/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:20:27 by ludumont          #+#    #+#             */
/*   Updated: 2022/02/08 14:19:32 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			x;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == NULL && src == NULL)
		return (0);
	if (d > s && dst != src)
	{
		while (len--)
		{
			d[len] = s[len];
		}
	}
	else if (d < s && dst != src)
	{
		x = 0;
		while (x < len)
		{
			d[x] = s[x];
			x++;
		}
	}
	return (dst);
}
