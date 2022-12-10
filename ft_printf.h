/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:15:06 by kle-rest          #+#    #+#             */
/*   Updated: 2022/12/10 14:59:06 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int				ft_printf(const char *format, ...);
int				ft_printf_d(int d);
int				ft_printf_c(char c);
int				ft_printf_s(char *s);
unsigned long	ft_printf_x(unsigned long nb);
unsigned int	ft_printf_X(unsigned int nb);
unsigned int	ft_printf_u(unsigned int nb);
unsigned long	ft_printf_p(unsigned long nb);
int				ft_strlen(char *str);

#endif