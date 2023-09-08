/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 00:27:45 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/27 01:48:09 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)

{
	int	i;
	int	j;

	j = ac -1;
	while (j > 0)
	{
		i = 0;
		while (av [j][i] && ac)
		{
			ft_putchar (av[j][i]);
			i++;
		}
		ft_putchar ('\n');
		j--;
	}
}
