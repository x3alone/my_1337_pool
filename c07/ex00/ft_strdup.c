/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 01:41:15 by otchouar          #+#    #+#             */
/*   Updated: 2023/09/05 19:43:30 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		i;
	int		len;

	len = ft_strlen(src) + 1;
	i = 0;
	cpy = malloc(sizeof(char) * len);
	if (!cpy)
		return (0);
	while (src[i])
	{
		cpy[i] = src[i];
		i++;
	}
	cpy[i] = '\0';
	return (cpy);
}
/*
#include <stdio.h>
int main()
{
	char	*str = "salam labas";	
	printf("ORIGINAL   : %s  : @ :  %p\n", str, str);
	char 	*cpy = ft_strdup(str);
	printf("COPY  :  %s   :  @   : %p\n", cpy, cpy);
	free(cpy);
}*/
