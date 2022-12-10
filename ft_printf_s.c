/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:37:19 by kle-rest          #+#    #+#             */
/*   Updated: 2022/12/10 15:17:40 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_s(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (write(1, "nil", 2));
	while (str[i])
	{
		ft_printf_c(str[i]);
		i++;
	}
	return (i);
}