/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:06:40 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/27 16:07:50 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	nbr;

	nbr = 1;
	while (nb > 0)
	{
		nbr *= nb;
		nb--;
	}
	if (nb < 0)
	{
		return (0);
	}
	return (nbr);
}
/*
int main()
{
	printf ("%d", ft_iterative_factorial(4));
}*/
