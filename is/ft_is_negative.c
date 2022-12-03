#include "is.h"

int	ft_if_negative(int nb)
{
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar('-');
	}
	return (nb);
}
