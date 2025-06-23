/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:59:31 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/17 10:08:02 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 0;
	if ((nb == 0 && power == 0) || power == 0)
		return (1);
	if (power < 0)
		return (0);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		if (res == 0)
			res = nb;
		res = res * nb;
		power--;
	}
	return (res);
}

/* #include <stdio.h>
int	main(void)
{
	int nb = 2;
	int power = 1;

	int res = ft_iterative_power(nb, power);
	printf("\n%d elavado por %d é igual a: %d.\n", nb, power, res);
} */