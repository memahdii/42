/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmirzaho <mmirzaho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 21:14:09 by mmirzaho          #+#    #+#             */
/*   Updated: 2025/08/15 21:25:52 by mmirzaho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	result(int i, char *c)
{
	while (i < 10)
	{
		write(1, &c[i], 1);
		i++;
	}
}

void	ft_putnbr(int nb)
{
	char	c[10];
	int		n;
	int		i;

	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
		write(1, "-", 1);
	i = 9;
	while (nb != 0)
	{
		n = nb % 10;
		if (n < 0)
			n = -n;
		c[i] = n + '0';
		nb /= 10;
		i--;
	}
	i++;
	result(i, c);
}
