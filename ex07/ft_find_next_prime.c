/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:34:46 by jorde-ol          #+#    #+#             */
/*   Updated: 2024/08/27 15:02:15 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	isprime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	while (isprime(nb) == 0)
	{
		nb++;
	}
	return (nb);
}
int	main(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;
	int	res;

	num1 = 1;
	res = ft_find_next_prime(num1);
	printf("Next prime number greater or equal %d is %d\n", num1, res);
	num2 = 41;
	res = ft_find_next_prime(num2);
	printf("Next prime number greater or equal %d is %d\n", num2, res);
	num3 = 100;
	res = ft_find_next_prime(num3);
	printf("Next prime number greater or equal %d is %d\n", num3, res);
	num4 = 7;
	res = ft_find_next_prime(num4);
	printf("Next prime number greater or equal %d is %d\n", num4, res);
	return (0);
}
