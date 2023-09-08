/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otchouar <otchouar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 04:54:00 by otchouar          #+#    #+#             */
/*   Updated: 2023/09/08 04:54:01 by otchouar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

void	ft_putnbr(long nb);
int		ft_atoi(char *str);
void	do_op(int a, int b, char op);
int		ft_strcmp(char *s1, char *s2);
void	ft_putchar(char c);
int		ft_multiplication(int a, int b);
int		ft_addition(int a, int b);
int		ft_substraction(int a, int b);
int		ft_division(int a, int b);
int		ft_modulo(int a, int b);

#endif
