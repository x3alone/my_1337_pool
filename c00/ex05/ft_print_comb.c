/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 19:39:26 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/17 20:48:42 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)

{
	char	les;
	char	le;
	char	la;

	les = 48;
	while (les <= '7')
	{
		le = les + 1;
		while (le <= '8')
		{
			la = le + 1;
			while (la <= '9')
			{
				write (1, &les, 1);
				write (1, &le, 1);
				write (1, &la, 1);
				if (les != '7')
					write (1, ", ", 2);
				la++;
			}
			le++;
		}
		les++;
	}
}
/*
int main()

{
	ft_print_comb();
		return 0;
}*/
