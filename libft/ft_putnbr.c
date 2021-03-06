/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolfe <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/10 17:54:17 by mrolfe            #+#    #+#             */
/*   Updated: 2018/12/10 17:54:19 by mrolfe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	unsigned int us_n;

	if (n < 0)
	{
		ft_putchar('-');
		us_n = -n;
	}
	else
		us_n = n;
	if (us_n / 10)
		ft_putnbr((int)(us_n / 10));
	ft_putchar((us_n % 10) + '0');
}
