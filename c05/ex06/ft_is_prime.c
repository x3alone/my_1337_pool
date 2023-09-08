/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:12:17 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/28 22:02:42 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;
	int	div_2;

	i = 2;
	if (nb == 2)
		return (1);
	if (nb % i == 0 || nb < 2)
		return (0);
	i = 3;
	div_2 = nb / i;
	while (i <= div_2)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}
/*
int main ()
{
	printf("%d\n", ft_is_prime(9));
}*/
