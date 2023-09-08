/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 02:32:16 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/19 02:32:32 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*int main()
{
	int	i;
	int T[6] = {1, 3, 4, 40, 30, 45};
	ft_rev_int_tab(T,6);
	for(i = 0; i < 6; i++)
	{
		printf("%d ",T[i]);
	}
	return(0);
}*/
