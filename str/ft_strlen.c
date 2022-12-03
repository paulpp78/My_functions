#include "str.h"

int	ft_strlen(char *str)
{
	int	nbchar;

	nbchar = 0;
	while (*str++)
		nbchar++;
	return (nbchar);
}
