#include "math.h"

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	while (!ft_is_prime(nb + i))
	{
	i++;
	}
	return (nb + i);
}
