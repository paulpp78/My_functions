
int	ft_iterative_factorial(int nb)
{
	int	a;
	int	res;

	a = 1;
	res = 1;
	if ((nb <= 0) || (nb > 12))
		return (0);
	if (nb == 1)
		return (1);
	while (a <= nb)
	{
		res *= a;
		a++;
	}
	return (res);
}
