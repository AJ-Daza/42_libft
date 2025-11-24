/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 13:22:18 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/24 13:22:18 by adaza-ru         ###   ########.fr       */
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

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

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
//int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_toupper(int c);
int				ft_tolower(int c);
//int				ft_memcmp(const void *s1, const void *s2, size_t n);

/*Return char*/
//char			*ft_strdup(const char *src);
char			*ft_strchr(const char *s, int c);
//char			*ft_strrchr(const char *s, int c);
//char			*ft_strnstr(const char *big, const char *little, size_t len);
//char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
//char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));

/*Return void*/
//void			*ft_memset(void *str, int c, size_t n);
//void			*ft_bzero(void *s, size_t n);
//void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
//void			*ft_calloc(size_t nmemb, size_t size);
//void			ft_striteri(char *s, void (*f)(unsigned int, char*));
//void			ft_putchar_fd(char c, int fd);
//void			ft_putendl_fd(char *s, int fd);
//void			ft_putnbr_fd(int n, int fd);
//void			ft_putstr_fd(char *s, int fd);

/*Return size_t*/
size_t			ft_strlen(const char *s);

/*Return unsigned int*/
//unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
//unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

#endif
