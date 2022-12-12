/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kle-rest <kle-rest@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/12 14:19:18 by kle-rest          #+#    #+#             */
/*   Updated: 2022/12/12 18:36:31 by kle-rest         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	d;
	char	c;
	char	*str;
	char	*s;
	
	s = NULL;
	c = 'c';
	d = -140145;
	str = "hello a tous";
	
	printf("--------str-------\n");
	printf("%d  ", ft_printf("hello world\n"));
	printf("%d  ", printf("hello world\n"));
	printf("--------%%c-------\n");
	printf("%d   ", ft_printf("c = %c\n", c));
	printf("%d   ", printf("c = %c\n", c));
	printf("--------%%s-------\n");
	printf("%d   ", ft_printf("str = %s\n", str));
	printf("%d   ", printf("str = %s\n", str));
	printf("--------%%p-------\n");
	printf("%d   ", ft_printf("%p\n",str));
	printf("%d   ", printf("%p\n", str));
	printf("--------%%d-------\n");
	printf("%d   ", ft_printf("%d\n", d));
	printf("%d   ", printf("%d\n", d));
	printf("--------%%i-------\n");
	printf("%d    ", ft_printf("%i\n", d));
	printf("%d   ", printf("%i\n", d));
	printf("--------%%u-------\n");
	printf("%d   ", ft_printf("%u\n", d));
	printf("%d   ", printf("%u\n", d));
	printf("--------%%x-------\n");
	printf("%d   ", ft_printf("%x\n", d));
	printf("%d   ", printf("%x\n", d));
	printf("--------%%X-------\n");
	printf("%d   ", ft_printf("%X\n", d));
	printf("%d   ", printf("%X\n", d));
	printf("--------%%%%-------\n");
	printf("%d   ", ft_printf("%%\n"));
	printf("%d   ", printf("%%\n"));
	printf("-------------------\n");
	printf("--------test-------\n");
	printf("-------------------\n");
	printf("%d", ft_printf("%p", s));
	
	
	
	
	
	
	// printf(" Mon printf = %d\n", ft_printf_d(d));
	// printf("Vrai printf = %d\n", d);
	// printf("----------------------\n");
	// printf(" Mon printf = %ld\n", ft_printf_p(d));
	// printf("Vrai printf = %d\n", d);
	// printf("----------------------\n");
	// printf(" Mon printf = %d\n", ft_printf_u(d));
	// printf("Vrai printf = %u\n", d);
	return (0);
}