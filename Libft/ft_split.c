/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:11:17 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 16:22:29 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_malloc_s(char const *s, char c)
{
	int i;
	int counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			if (s[i - 1] != c)
				counter++;
			i++;
		}
		else
			i++;
	}
	return (counter);
}

static char	*ft_write(char const *s, char c)
{
	size_t			i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s[i] && s[i] != c)
		i++;
	return (ft_substr(s, j, i));
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		counter;
	char	**tab;

	i = 0;
	j = 0;
	counter = 0;
	if (s == NULL)
		return (NULL);
	if (!(tab = malloc((ft_malloc_s(s, c) + 2) * sizeof(char*))))
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else if (s[i] && s[i] != c)
		{
			tab[j++] = ft_write(&s[i], c);
			while (s[i] != c && s[i])
				i++;
		}
	}
	tab[j] = (NULL);
	return (tab);
}
