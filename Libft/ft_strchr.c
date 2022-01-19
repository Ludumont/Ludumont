/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:02:02 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/19 17:07:07 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *str;
	unsigned char i;

	i = (unsigned char) c;
	str = (char *)s;
	while (*str != i)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

/*
int main(void)
{
	const char *s = "Ceci est un test";
	int c = 't';
	printf("%s\n", ft_strchr(s, c));
	printf("%s\n", strchr(s, c));
	return (0);
}
*/