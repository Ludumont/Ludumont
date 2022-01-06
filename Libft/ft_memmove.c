/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 10:20:27 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 14:23:52 by ludumont         ###   ########.fr       */
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
	if ((dst == NULL && src == NULL) || !dst)
		return (NULL);
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