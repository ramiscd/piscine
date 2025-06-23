/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 18:38:17 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/18 18:44:04 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	return (0);
}

int	main(void)
{
	int num = 13;
	int res = ft_is_prime(num);

	if(res == 1)
		printf("O número %d é um número primo. \n", num);
	else
		printf("O número %d não é um número primo. \n", num);
	return (0);
}
