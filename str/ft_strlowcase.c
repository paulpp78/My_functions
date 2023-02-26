
char	*ft_strlowcase(char *str)
{
	int	low;

	low = 0;
	while (str[low] != '\0')
	{
		if (str[low] >= 'A' && str[low] <= 'Z')
			str[low] += 32;
		low++;
	}
	return (str);
}
