
#ifndef LIBFT_MY_FUNCTIONS_H
#define LIBFT_MY_FUNCTIONS_H
int     ft_fibonacci(int index);
int		ft_find_next_prime(int nb);
int		ft_is_prime(int nb);
int     ft_iterative_factorial(int nb);
int		ft_iterative_power(int nb, int power);
void	ft_putnbr(int nb);
int	    ft_recursive_factorial(int nb);
int	    ft_sqrt(int nb);
void	ft_swap(int *a, int *b);
void	ft_ultimate_div_mod(int *a, int *b);
int	ft_if_negative(int nb);
int	ft_str_is_alpha(char *str);
int	ft_str_is_lowercase(char *str);
int	ft_str_is_numeric(char *str);
int	ft_str_is_printable(char *str);
int	ft_str_is_uppercase(char *str);
char	*ft_strupcase(char *str);
char	*ft_strstr(char *str, char *to_find);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int	    ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strncat(char *dest, char *src, unsigned int nb);
char	*ft_strlowcase(char *str);
int	    ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
int	    ft_strcmp(char *s1, char *s2);
char	*ft_strcat(char *dest, char *src);
char	*ft_strcapitalize(char *str);
void	ft_putstr(char *str);
int     ft_atoi(char *str);
void	ft_putchar(char c);
#endif //LIBFT_MY_FUNCTIONS_H
