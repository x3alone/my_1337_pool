/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 13:22:42 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/17 20:53:30 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	pepepopo;
	char	nilahisatrashchamp;

	pepepopo = 'P';
	nilahisatrashchamp = 'N';
	if (n >= 0)
	{
		write (1, &pepepopo, 1);
	}
	if (n < 0)
	{
		write (1, &nilahisatrashchamp, 1);
	}
}
/*
int main ()
{
  int n = 15164;
  ft_is_negative(n);
  return 0;
}
*/
