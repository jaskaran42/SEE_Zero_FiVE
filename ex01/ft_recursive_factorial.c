/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jorde-ol <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:07:26 by jorde-ol          #+#    #+#             */
/*   Updated: 2024/08/27 14:53:00 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb);

int	ft_recursive_factorial(int nb)
{
	int	i;
	int	f;

	i = 1;
	f = 1;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (i <= nb)
	{
		f = nb * ft_recursive_factorial(nb - 1);
		i++;
	}
	return (f);
}
int	main(void)
{
        printf("Factorial 5: %d\n", ft_recursive_factorial(5));
        printf("Factorial 0: %d\n", ft_recursive_factorial(0));
        printf("Factorial -5: %d\n", ft_recursive_factorial(-5));
        return (0);
}
