/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:12:13 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 14:12:35 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int compteur;

	i = 0;
	j = 0;
	compteur = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	compteur += i;
	while (src[j])
		j++;
	compteur += j;
	if (i == size)
		return (compteur);
	j = 0;
	while (src[j] && i + j < size - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (compteur);
}