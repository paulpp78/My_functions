/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperigau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 22:42:34 by pperigau          #+#    #+#             */
/*   Updated: 2022/12/03 00:43:05 by pperigau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATH_H
# define MATH_H

int			ft_fibonacci(int index);
int			ft_find_next_prime(int nb);
int			ft_iterative_factorial(int nb);
int			ft_iterative_power(int nb, int power);
void		ft_putnbr(int nb);
int			ft_recursive_factorial(int nb);
int			ft_sqrt(int nb);
void		ft_swap(int *a, int *b);
void		ft_ultimate_div_mod(int *a, int *b);

#endif
