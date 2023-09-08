/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 12:43:51 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/17 13:21:47 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	lqirch;

	lqirch = '0';
	while (lqirch <= '9')
	{
		write (1, &lqirch, 1);
		lqirch++;
	}
}
