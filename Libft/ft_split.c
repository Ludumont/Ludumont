/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:11:17 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/19 17:50:10 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_mem_calc(char const *s, char c)
{
	int	i;
	int	counter;

	i = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i++] == c)
			counter++;
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

char	**ft_free(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	char	**tab;

	j = 0;
	if (s == NULL)
		return (NULL);
	printf("%i\n", ft_mem_calc(s, c));
	tab = (char **)malloc((ft_mem_calc(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else if (*s && *s != c)
		{
			tab[j++] = ft_write(&*s, c);
			if(tab[j - 1] == NULL)
				return (ft_free(tab, j - 1));
			while (*s != c && *s)
				s++;
		}
	}
	tab[j] = (NULL);
	return (tab);
}
/*
int main()
{
	ft_split(" test ", ' ');
	return (0);
}
*/