

#ifndef LIBFT_STR_H
#define LIBFT_STR_H
//#include "../libft.h"
char	*ft_strupcase(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strlowcase(char *str);
int	ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int	ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcapitalize(char *str);
void	ft_putstr(char *str);
int ft_atoi(char *str);
void	ft_putchar(char c);
#endif //LIBFT_STR_H
