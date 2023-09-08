/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 09:42:04 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/22 12:04:39 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
			i++;
	}
	return (s1[i] - s2[i]);
}
/*
int main()

{
	char s1[] = "lakntikatqrahadchirakmsalikrk";
	char s2[] = "lakntikatqrahadchirakmsalikr";

	printf("%d", ft_strcmp(s1,s2));
}*/
