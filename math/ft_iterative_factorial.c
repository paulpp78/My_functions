/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:53:13 by pperigau          #+#    #+#             */
/*   Updated: 2022/12/01 23:34:58 by pperigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "math.h"

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
