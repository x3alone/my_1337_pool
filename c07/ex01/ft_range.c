/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 21:44:26 by otchouar          #+#    #+#             */
/*   Updated: 2023/09/05 19:46:41 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*arr;

	if (min < max)
	{
		size = max - min;
		arr = (int *)malloc(size * sizeof(int));
		i = 0;
		while (min < max)
		{
			arr[i] = min;
			min++;
			i++;
		}
		return (arr);
	}
	else
	{
		return (0);
	}
}
/*
#include <stdio.h>

int main()
{
	int	*tab;
	int	i;

	tab = ft_range(12, 22);
	i = 0;
	while (i < 12)
	{
		printf("%d", tab[i]);
		i++;
	}
}*/
