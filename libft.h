/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:07:38 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/04 13:07:41 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

/**************************/
/*      INCLUDES          */
/**************************/
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

/**************************/
/*      FUNCTIONS         */
/**************************/

/*Return int*/
int				ft_isalpha(int c);
int				ft_isdigit(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isprint(int c);
int				ft_atoi(const char *str);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);

/*Return char*/
char			*ft_strdup(const char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_strrchr(const char *s, int c);
char			*ft_strnstr(const char *big, const char *little, size_t len);
char			*ft_substr(char const *s, unsigned int start, size_t len);

/*Return void*/
void			*ft_memset(void *str, int c, size_t n);
void			*ft_bzero(void *s, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);

/*Return size_t*/
size_t			ft_strlen(const char *s);

/*Return unsigned int*/
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif