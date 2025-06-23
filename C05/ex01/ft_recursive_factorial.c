/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 13:28:00 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/17 10:08:14 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb -1));
}

/* #include <stdio.h>
int	main(void)
{
	int val = 5;
	int res = ft_recursive_factorial(val);

	printf("%d! é igual a: %d\n", val, res);
	return (0);
}
 */