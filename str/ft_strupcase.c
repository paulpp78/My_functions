/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 13:58:28 by pperigau          #+#    #+#             */
/*   Updated: 2022/12/01 23:15:06 by pperigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	up;

	up = 0;
	while (str[up] != '\0')
	{
		if (str[up] >= 'a' && str[up] <= 'z')
			str[up] -= 32;
		up++;
	}
	return (str);
}
