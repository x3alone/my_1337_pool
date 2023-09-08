/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 19:52:39 by otchouar          #+#    #+#             */
/*   Updated: 2023/09/05 21:23:13 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

void	f_strcat(char *d, char *s)
{
	int	i;

	i = 0;
	while (d[i])
	{
		i++;
	}
	while (*s)
	{
		d[i++] = *(s++);
	}
	d[i] = '\0';
}

int	f_len(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i + 1);
}

void	concate(int s, char *sep, char **strs, char *n_s)
{
	int	i;

	i = 0;
	while (i < s)
	{
		f_strcat(n_s, strs[i]);
		if (i < s - 1)
			f_strcat(n_s, sep);
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		t_l;
	int		i;
	int		s;
	char	*n_s;

	s = size;
	t_l = 0;
	i = 0;
	if (s == 0)
	{
		n_s = malloc(sizeof(char));
		n_s[0] = 0;
		return (n_s);
	}
	while (i < s)
		t_l += f_len(strs[i++]);
	n_s = malloc(sizeof(char) * (t_l + (f_len(sep) * (s - 1)) + 1));
	if (!n_s)
		return (0);
	n_s[0] = '\0';
	i = 0;
	concate(s, sep, strs, n_s);
	return (n_s);
}
/*

#include <stdio.h>
int main()
{
	char *strs[] = {"candom", "hii", "atay" ,"kora"};
	char *str;
	
	str = ft_strjoin(4, strs, ", ");
	printf("%s\n", str);
}*/
