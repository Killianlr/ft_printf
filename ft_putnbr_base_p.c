/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_p.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 17:17:09 by kle-rest          #+#    #+#             */
/*   Updated: 2022/12/12 17:57:49 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_p(long int d, char *base)
{
	int	count;

	count = 0;
	if (d < 0)
		d = d * -1;
	if (d < ft_strlen(base))
		count += ft_printf_c(base[d]);
	else
	{
		count += ft_putnbr_base(d / (ft_strlen(base)), base);
		count += ft_putnbr_base(d % (ft_strlen(base)), base);
	}
	return (count);
}
