/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 16:11:17 by ludumont          #+#    #+#             */
/*   Updated: 2022/02/08 15:55:52 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_line(const char *str, char c)
{
	int	i;
	int	line;

	i = 0;
	line = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] && str[i] != c)
		{
			line++;
			while (str[i] != c && str[i])
				i++;
		}
	}
	return (line);
}

static char	**ft_free(char **tab, int j)
{
	while (j >= 0)
	{
		free(tab[j]);
		j--;
	}
	free(tab);
	return (tab);
}

static char	*ft_strsdup(char const *str, char c)
{
	size_t			len;
	unsigned int	start;
	char			*dest;

	len = 0;
	start = 0;
	while (str[len] && str[len] != c)
		len++;
	dest = ft_substr(str, start, len);
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	char	**tab;
	int		j;

	j = 0;
	if (str == NULL)
		return (NULL);
	tab = malloc((ft_count_line(str, c) + 1) * sizeof(char *));
	if (tab == NULL)
		return (NULL);
	while (*str)
	{
		while (*str == c)
			str++;
		if (*str != c && *str)
		{
			tab[j++] = ft_strsdup(str, c);
			if (tab[j - 1] == NULL)
				return (ft_free(tab, j - 1));
			while (*str != c && *str)
				str++;
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