/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 10:22:27 by jorde-ol          #+#    #+#             */
/*   Updated: 2024/08/27 15:00:04 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	r;

	r = 0;
	if (nb < 0)
		return (0);
	while (r * r <= nb)
	{
		if (r * r == nb)
			return (r);
		r++;
	}
	return (0);
}
int	main(void)
{
	int	num1;
	int	num2;
	int	num3;
	int	res;

	num1 = 25;
	res = ft_sqrt(num1);
	if (res != 0)
		printf("Square Root %d: %d\n", num1, res);
	else
		printf("Irracional Number %d\n", num1);
	num2 = 10;
	res = ft_sqrt(num2);
	if (res != 0)
		printf("Square Root %d: %d\n", num2, res);
	else
		printf("Irracional Number %d\n", num2);
	num3 = 100;
	res = ft_sqrt(num3);
	if (res != 0)
		printf("Square Root %d: %d\n", num3, res);
	else
		printf("Irracional Number %d\n", num3);
	return (0);
}
