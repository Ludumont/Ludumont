/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:43:52 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/19 17:08:38 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char *dest;
	int i;
	int j;
	int size;

	if (s1 == 0 || s2 == 0)
		return (0);
	i = -1;
	j = -1;
	size = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	dest = (char *)malloc(sizeof(char) * size + 1);
	if (dest == NULL)
		return (0);
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[++j])
		dest[i + j] = s2[j];
	dest[i + j] = '\0';
	return (dest);
}