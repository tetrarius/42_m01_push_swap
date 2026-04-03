/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 11:58:23 by aravakia          #+#    #+#             */
/*   Updated: 2026/02/12 13:07:07 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_getlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;
	long	nbr;

	len = ft_getlen(n);
	res = (char *)malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	res[len] = '\0';
	if (n == 0)
		res[0] = '0';
	nbr = n;
	if (n < 0)
	{
		res[0] = '-';
		nbr = -nbr;
	}
	while (nbr != 0)
	{
		res[len - 1] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len--;
	}
	return (res);
}
