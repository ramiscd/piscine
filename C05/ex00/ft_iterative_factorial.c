/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 12:42:59 by rdamasce          #+#    #+#             */
/*   Updated: 2025/07/24 23:12:26 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	fac;

	fac = 0;
	if (nb == 0 || nb == 1)
		return (1);
	while (nb > 1)
	{
		if (fac == 0)
			fac = nb;
		fac = fac * (nb - 1);
		nb--;
	}
	return (fac);
}

/* #include <stdio.h>
int	main(void)
{
	int val = 1;
	int res = ft_iterative_factorial(val);

	printf("%d! é igual a: %d\n", val, res);
	return (0);
}
 */