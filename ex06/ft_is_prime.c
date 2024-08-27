/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:34:46 by jorde-ol          #+#    #+#             */
/*   Updated: 2024/08/27 15:01:11 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
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
int	main(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	num4;
	int	res;

	num1 = 1;
	res = ft_is_prime(num1);
	if (res == 1)
		printf("Prime Number %d: %d\n", num1, res);
	else
		printf("Not Prime Number %d\n", num1);
	num2 = 41;
	res = ft_is_prime(num2);
	if (res == 1)
		printf("Prime Number %d: %d\n", num2, res);
	else
		printf("Not Prime Number %d\n", num2);
	num3 = 100;
	res = ft_is_prime(num3);
	if (res == 1)
		printf("Prime Number %d: %d\n", num3, res);
	else
		printf("Not Prime Number %d\n", num3);
	num4 = 7;
	res = ft_is_prime(num4);
	if (res == 1)
		printf("Prime Number %d: %d\n", num4, res);
	else
		printf("Not Prime Number %d\n", num4);
	return (0);
}
