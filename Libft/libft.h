/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:03:49 by ludumont          #+#    #+#             */
/*   Updated: 2022/01/06 14:48:53 by ludumont         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

#define LIBFT_H
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int	ft_isdigit(int	c);
int	ft_isprint(int	c);
int	ft_isalnum(int 	c);
int ft_isalpha(int	c);
int	ft_isascii(int	c);
void	*ft_memset (void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void *ft_memcpy (void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char 	*ft_strrchr(const char *s, int c);	
size_t	ft_strlcat(char *dest, const char *src, size_t n);
size_t	ft_strlcpy(char *dest, const char *src, size_t n);
size_t	ft_strlen(const char *s);
int	ft_tolower(int c);
int	ft_toupper(int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);

#endif