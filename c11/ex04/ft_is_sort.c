/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 23:28:04 by otchouar          #+#    #+#             */
/*   Updated: 2023/09/07 23:28:08 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	indice;

	i = 0;
	indice = 1;
	while (i < length - 1 && indice)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			indice = 0;
		i++;
	}
	if (indice != 1)
	{
		i = 0;
		while (i < length - 1)
		{
			if ((*f)(tab[i], tab[i + 1]) > 0)
				return (0);
			i++;
		}
	}
	return (1);
}
