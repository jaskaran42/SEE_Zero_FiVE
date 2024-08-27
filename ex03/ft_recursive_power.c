/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 16:19:07 by jorde-ol          #+#    #+#             */
/*   Updated: 2024/08/27 14:55:13 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power);

int	ft_recursive_power(int nb, int power)
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
		p = nb * ft_recursive_power(nb, i - 1);
		i++;
	}
	return (p);
}
int   main(void)
{
        printf("Power 25*6: %d\n", ft_recursive_power(25, 6));
        printf("Power  2*3: %d\n", ft_recursive_power(2, 3));
        printf("Power -5*2: %d\n", ft_recursive_power(-5, 2));
	printf("Power 2*-5: %d\n", ft_recursive_power(2, -5));
	printf("Power 0*0: %d\n", ft_recursive_power(0, 0));
        return (0);
}
