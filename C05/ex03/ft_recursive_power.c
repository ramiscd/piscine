/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:30:20 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/17 10:07:51 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power != 0)
		return (nb * ft_recursive_power(nb, power -1));
	else
		return (1);
}

/* int	main(void)
{
	int nb = 3;
	int power = 3;

	int res = ft_recursive_power(nb, power);
	printf("\n%d elavado por %d é igual a: %d.\n", nb, power, res);
} */