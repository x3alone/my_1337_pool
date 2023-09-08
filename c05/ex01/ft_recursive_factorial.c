/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:07:33 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/27 16:36:50 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	if (nb >= 2)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (0);
}
/*
int main (void)
{
	printf("%d\n", ft_recursive_factorial(4));
}*/
