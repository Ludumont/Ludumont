/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:20:07 by ludumont          #+#    #+#             */
/*   Updated: 2022/02/08 14:31:03 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	unsigned char	i;

	i = (unsigned char) c;
	str = (char *)s + ft_strlen(s);
	while (*str != i)
	{
		if (str == s)
			return (NULL);
		str--;
	}
	return (str);
}

/*
int main(void)
{
	const char *s = "sdhjr evdbvkdjhrgksjkbdf efksjhd";
	int c = '5';
	printf("%s\n", ft_strrchr(s, c));
	printf("%s\n", strrchr(s, c));
	return (0);
}
*/