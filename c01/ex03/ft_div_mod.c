/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 01:56:30 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/19 02:21:14 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)

{
	*div = a / b;
	*mod = a % b;
}
/*
int main()
{
	int a;
	int b;
	int div;
	int mod;
	a = 40;
	b = 10;
	ft_div_mod(a,b,&div,&mod);
	printf("div = %d \n mod = %d \n", div, mod);
}*/
