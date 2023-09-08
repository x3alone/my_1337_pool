/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 02:22:38 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/19 02:24:29 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*int main()
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5 ;
	printf("a = %d \n b = %d \n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("a= %d \n b =%d \n", a, b);
}*/
