/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:06:17 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 15:18:25 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *ptr;
	int length;
	int i;

	length = 0;
	while (s[length])
		length++;
	ptr = (char *)malloc(sizeof(char) * length + 1);
	if (ptr == '\0')
		return (NULL);
	i = -1;
	while(i++ < length)
		ptr[i] = s[i];
	ptr[i] = '\0';
	return (ptr);
}