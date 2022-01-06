/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 14:57:00 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 15:05:39 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t tab, size_t size)
{
	void *ptr;

	ptr = malloc(tab * size);
	if (ptr != 0)
		ft_memset(ptr, 0, (tab * size)); 
	return (ptr);	
}