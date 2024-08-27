/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:19:07 by jorde-ol          #+#    #+#             */
/*   Updated: 2024/08/27 14:54:30 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	p;

	p = 1;
	i = 1;
	if (nb < 0 || power < 0)
		return (0);
	if (nb == 0 || power == 0)
		return (1);
	while (i <= power)
	{
		p *= nb;
		i++;
	}
	return (p);
}
int   main(void)
{
        printf("Power 25*6: %d\n", ft_iterative_power(25, 6));
        printf("Power  2*3: %d\n", ft_iterative_power(2, 3));
        printf("Power -5*2: %d\n", ft_iterative_power(-5, 2));
	printf("Power 2*-5: %d\n", ft_iterative_power(2, -5));
	printf("Power 0*0: %d\n", ft_iterative_power(0, 0));
        return (0);
}
