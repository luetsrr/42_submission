/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yikeda <yikeda@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:21:59 by yikeda            #+#    #+#             */
/*   Updated: 2025/08/18 19:38:36 by yikeda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		count;
	char	c;

	count = 0;
	c = 0;
	if (nb == -2147483648)
	{
		write(1, "-", 1);
		ft_putnbr(-(nb / 10));
		c = '8';
		write(1, &c, 1);
		return (11);
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		count++;
		nb = -nb;
	}
	if (nb >= 10)
		count += ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write(1, &c, 1);
	count++;
	return (count);
}
