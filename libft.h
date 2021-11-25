#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_list
{
    void    *content;
    struct s_list   *next;
}   t_list;

char    *ft_itoa(int n);
char    **ft_split(const char *s, char c);
char	*ft_strchr(const char *string, int c);
char	*ft_strdup(char *src);
char    *ft_strjoin(const char *s1, const char *s2);
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strnstr(const char *small, const char *large, size_t len);
char	*ft_strrchr(const char *string, int c);
char    *ft_strtrim(const char *s1, const char *set);
char    *ft_substr(const char *s, unsigned int start, size_t len);
int     ft_atoi(const char *str);
int	    ft_isalnum(int a);
int	    ft_isalpha(int a);
int	    ft_isascii(int a);
int	    ft_isdigit(int a);
int	    ft_isprint(int a);
int	    ft_memcmp(const void *s1, const void *s2, size_t n);
int	    ft_strlen(const char *str);
int	    ft_strncmp(char *s1, char *s2, unsigned int n);
int	    ft_tolower(int a);
int	    ft_toupper(int a);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
void    *ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void    ft_putchar_fd(char c, int fd);
void    ft_putendl_fd(char *s, int fd);
void    ft_putnbr_fd(int n, int fd);
void    ft_putstr_fd(char *s, int fd);
void    ft_striteri(char *s, void (*f)(unsigned int, char*));
void    ft_lstadd_front(t_list **alst, t_list *new);
void    ft_lstadd_back(t_list **alst, t_list *new);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstnew(void *content);
t_list  *ft_lstlast(t_list *lst);


#endif