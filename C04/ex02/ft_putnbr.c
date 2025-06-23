/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 10:26:51 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/17 17:02:33 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	inverted_string[12];
	int		i;
	int		digit;
	long	long_nb;

	i = 0;
	long_nb = nb;
	if (long_nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (long_nb < 0)
	{
		write(1, "-", 1);
		long_nb = -long_nb;
	}
	while (long_nb != 0)
	{
		digit = long_nb % 10;
		inverted_string[i++] = digit + '0';
		long_nb = long_nb / 10;
	}
	while (--i >= 0)
		write(1, &inverted_string[i], 1);
}

int	main(void)
{
	ft_putnbr(123);
	return (0);
}