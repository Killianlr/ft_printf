/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 22:37:10 by kle-rest          #+#    #+#             */
/*   Updated: 2022/12/10 15:13:04 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_recursive(long int d, char *dec)
{
	int	count;

	count = 0;
	if (d < 0)
	{
		d = d * -1;
		count += ft_printf_c('-');
	}
	if (d < ft_strlen(dec))
		count += ft_printf_c(dec[d]);
	else
	{
		ft_recursive(d / (ft_strlen(dec)), dec);
		ft_recursive(d % (ft_strlen(dec)), dec);
	}
	return (count);
}


int	ft_printf_d(int d)
{
	char	*dec;
	char	*h;
	int	count;

	dec = "0123456789";
	count = ft_recursive(d, dec);
	return (count);
}

int	main(void)
{
	int	d;
	
	d = -140145;
	ft_printf_d(d);
}