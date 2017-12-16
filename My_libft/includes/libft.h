/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbrangie <lbrangie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 17:52:24 by lbrangie          #+#    #+#             */
/*   Updated: 2017/12/16 16:41:12 by lbrangie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

# define FT_INT_MAX 2147483647
# define FT_INT_MIN -2147483648
# define FT_UINT_MAX 4294967295
# define FT_LONG_MAX 9223372036854775807
# define FT_LONG_MIN -9223372036854775808
# define FT_ULONG_MAX 18446744073709551615

typedef struct	s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}				t_list;

char			*ft_itoa(int n);
char			*ft_str_tolower(char *str);
char			*ft_str_toupper(char *str);
char			*ft_strcapitalize(char *str);
char			*ft_strcat(char *s1, const char *s2);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strdup(const char *s1);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strmap(char const *s, char (*f)(char));
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char			*ft_strncat(char *s1, const char *s2, size_t n);
char			*ft_strncpy(char *dst, const char *src, size_t len);
char			*ft_strndup(const char *s1, size_t n);
char			*ft_strnew(size_t size);
char			*ft_strnstr(const char *haystack, const char *needle, size_t n);
char			*ft_strpbrk(const char *s1, const char *s2);
char			*ft_strrchr(const char *s, int c);
char			*ft_strrev(char *str);
char			*ft_strstr(const char *haystack, const char *needle);
char			*ft_strsub(char const *s, unsigned int start, size_t len);
char			*ft_strtrim(char const *s);
char			**ft_strsplit(char const *s, char c);
int				ft_abs(int n);
int				ft_atoi(const char *str);
int				ft_factorial(int nb);
int				ft_fibonacci(int nb);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isblank(int c);
int				ft_iscntrl(int c);
int				ft_isdigit(int c);
int				ft_isgraph(int c);
int				ft_islower(int c);
int				ft_isneg(int n);
int				ft_isprime(int n);
int				ft_isprint(int c);
int				ft_ispunct(int c);
int				ft_isspace(int c);
int				ft_isupper(int c);
int				ft_isxdigit(int c);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
int				ft_nextprime(int n);
int				ft_pgcd(int a, int b);
int				ft_power(int nb, int power);
int				ft_ppcm(int a, int b);
int				ft_putchar(char c);
int				ft_putchar_endl(char c);
int				ft_putchar_endl_fd(char c, int fd);
int				ft_putchar_fd(char c, int fd);
int				ft_putstr(const char *s);
int				ft_putstr_endl(const char *s);
int				ft_putstr_endl_fd(const char *s, int fd);
int				ft_putstr_fd(const char *s, int fd);
int				ft_str_isalnum(char *str);
int				ft_str_isalpha(char *str);
int				ft_str_isascii(char *str);
int				ft_str_isblank(char *str);
int				ft_str_iscntrl(char *str);
int				ft_str_isdigit(char *str);
int				ft_str_isgraph(char *str);
int				ft_str_islower(char *str);
int				ft_str_isprint(char *str);
int				ft_str_ispunct(char *str);
int				ft_str_isspace(char *str);
int				ft_str_isupper(char *str);
int				ft_str_isxdigit(char *str);
int				ft_strcmp(const char *s1, const char *s2);
int				ft_strequ(char const *s1, char const *s2);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
int				ft_strnequ(char const *s1, char const *s2, size_t n);
int				ft_sqrt(int nb);
int				ft_tolower(int c);
int				ft_toupper(int c);
size_t			ft_cntwrd(const char *s, char c);
size_t			ft_numlen(int n);
size_t			ft_strclen(char const *s, char c);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *s);
size_t			ft_strnlen(const char *s, size_t maxlen);
t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list			*ft_lstnew(void const *content, size_t content_size);
void			ft_bzero(void *s, size_t n);
void			ft_lstadd(t_list **alst, t_list *new);
void			ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void			ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void			ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void			ft_memdel(void **ap);
void			ft_putendl(char const *s);
void			ft_putendl_fd(char const *s, int fd);
void			ft_putnbr(int n);
void			ft_putnbr_fd(int n, int fd);
void			ft_puttab(char **tab);
void			ft_puttab_fd(char **tab, int fd);
void			ft_strclr(char *s);
void			ft_strdel(char **as);
void			ft_striter(char *s, void (*f)(char *));
void			ft_striteri(char *s, void (*f)(unsigned int, char *));
void			*ft_memalloc(size_t size);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *dst, const void *src, size_t len);
void			*ft_memset(void *b, int c, size_t len);

#endif
