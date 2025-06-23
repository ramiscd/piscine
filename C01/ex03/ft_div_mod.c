/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 09:43:46 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/02 16:53:24 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*mod = a % b;
	*div = a / b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	result;
// 	int	rest;
// 	char	c;

// 	int *div = &result;
// 	int *mod = &rest;

// 	a = 5;
// 	b = 2;
// 	c = a + '0';
// 	printf("Endereço de result 1 = %p\n", &result);
// 	printf("Endereço do rest = %p\n\n", &rest);
// 	ft_div_mod(a, b, div, mod);
// 	printf("\n\nValor rest depois da função = %d\n", rest);
// 	printf("Valor result depois da função = %d\n", result);
// 	return (0);
// }