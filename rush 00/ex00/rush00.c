/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymghazli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 14:24:22 by ymghazli          #+#    #+#             */
/*   Updated: 2023/08/20 17:37:15 by ymghazli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i <= y)
	{
		while (j <= x)
		{
			if ((i == 1 || i == y) && (j == 1 || j == x))
				ft_putchar('o');
			else if (i > 1 && i < y && (j == 1 || j == x))
				ft_putchar('|');
			else if ((i == 1 && j > 1 && j < x) || (i == y && j > 1 && j < x))
				ft_putchar('-');
			else if (i > 1 && i < y && j > 1 && j < x)
				ft_putchar(' ');
			j++;
		}
		j = 1;
		ft_putchar('\n');
		i++;
	}
}
