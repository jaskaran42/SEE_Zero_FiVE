/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmehmy <jmehmy@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 15:04:41 by jmehmy            #+#    #+#             */
/*   Updated: 2024/08/28 15:38:15 by jmehmy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int	s;

	s = 0;
	while (str[s] != '\0')
	{
		s++;
	}
	return (s);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	s;
	unsigned int	d;
	unsigned int	dlen;
	unsigned int	slen;

	s = 0;
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	dlen = d;
	slen = ft_strlen(src);
	if (size == 0 || size <= dlen)
		return (slen + size);
	while (src[s] != '\0' && s < size - dlen -1)
	{
		dest[d] = src[s];
		s++;
		d++;
	}
	dest [d] = '\0';
	return (dlen + slen);
}
/*int main ()
{
	char arr[]="Hello";
	char dest[]="World";
	printf ("%u\n", ft_strlcat(dest, arr,15));
	printf ("%s\n", dest);
}*/
