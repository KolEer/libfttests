/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/16 14:18:30 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 16:52:05 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr(char const *s);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl(char const *s);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr(int n);
void	ft_putnbr_fd(int n, int fd);
void	ft_memdel(void **ap);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
void	ft_strclr(char *s);
char	*ft_strchr(const char *s, int c);
void	ft_bzero(void *b, size_t n);
void	*ft_memalloc(size_t size);
void	ft_strdel(char **as);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_strlen(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char    *ft_strnew(size_t size);
char	*ft_strmap(char const *s, char (*f)(char));
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_itoa(int n);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	**ft_strsplit(char const *s, char c);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
//testfuncs
void	test_atoi(void);
void	test_bzero(void);
void	test_isalnum(void);
void	test_isalpha(void);
void	test_isascii(void);
void	test_isdigit(void);
void	test_isprint(void);
void	test_itoa(void);
void	test_memalloc(void);
void	test_memccpy(void);
void	test_memchr(void);
void	test_memcmp(void);
void	test_memcpy(void);
void	test_memdel(void);
void	test_memmove(void);
void	test_memset(void);
void	test_putchar(void);
void	test_putchar_fd(void);
void	test_putendl(void);
void	test_putendl_fd(void);
void	test_putnbr(void);
void	test_putnbr_fd(void);
void	test_putstr(void);
void	test_putstr_fd(void);
void	test_strcat(void);
void	test_strchr(void);
void	test_strclr(void);
void	test_strcmp(void);
void	test_strcpy(void);
void	test_strdel(void);
void	test_strdup(void);
void	test_strequ(void);
void	test_striter(void);
void	test_striteri(void);
void	test_strjoin(void);
void	test_strlcat(void);
void	test_strlen(void);
void	test_strmap(void);
void	test_strmapi(void);
void	test_strncat(void);
void	test_strncmp(void);
void	test_strncpy(void);
void	test_strnequ(void);
void	test_strnew(void);
void	test_strnstr(void);
void	test_strrchr(void);
void	test_strsplit(void);
void	test_strstr(void);
void	test_strsub(void);
void	test_strtrim(void);
void	test_toupper(void);
void	test_tolower(void);
#endif
