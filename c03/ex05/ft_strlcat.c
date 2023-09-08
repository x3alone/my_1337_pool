/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 21:34:25 by otchouar          #+#    #+#             */
/*   Updated: 2023/08/24 22:36:00 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
	i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	destlen;
	unsigned int	srclen;

	i = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= destlen)
		return (size + srclen);
	else if (size > destlen)
	{
		while (src[i] != '\0' && i < size - 1 - destlen)
		{
			dest[destlen + i] = src[i];
			i++;
		}
		dest[destlen + i] = '\0';
	}
	return (destlen + srclen);
}
/*
int main ()

{
  unsigned int size;
  unsigned int lcat;

  char dest [20] = "cole";
  char src [] = "weback";
  size = 18;
  lcat = ft_strlcat(dest,src, size);
  printf("%s\n", dest);
  printf("%u\n", lcat);
  return(0);
}*/
