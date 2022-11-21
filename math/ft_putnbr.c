/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 11:10:58 by pperigau          #+#    #+#             */
/*   Updated: 2022/08/17 12:07:48 by pperigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void	ft_putnbr(int nb)

{
    int	chiffres;
    int	i;
    int	nbr;
    int	a;

    chiffres = ft_strlen(nb);
    a = 0;
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
    }
    else
    {
        nb = ft_if_negative(nb);
        while (chiffres > 0)
        {
            i = chiffres;
            nbr = nb;
            while (i-- > 1)
                nbr = nbr / 10;
            ft_putchar('0' + nbr - a * 10);
            a = nbr;
            chiffres--;
        }
    }
}
