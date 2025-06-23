/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 13:39:39 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/19 11:39:21 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);
int	sqrt_rec(int nb, int raiz);

int	ft_sqrt(int nb)
{
	int	raiz;

	raiz = 0;
	return (sqrt_rec(nb, raiz));
}

int	sqrt_rec(int nb, int raiz)
{
	if (raiz * raiz > nb)
		return (0);
	if (raiz * raiz == nb)
	{
		return (raiz);
	}
	return (sqrt_rec(nb, raiz + 1));
}

#include <stdio.h>
int	main(void)
{
	int nb = 25;
	int res = ft_sqrt(nb);
	printf("raiz quadrada de %d é igual a %d\n", nb, res);
	return (0);
}
