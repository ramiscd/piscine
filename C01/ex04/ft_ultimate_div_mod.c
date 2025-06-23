/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 16:55:47 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/02 18:48:34 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aux_a;
	int	aux_b;

	aux_a = *a;
	aux_b = *b;
	*a = aux_a / aux_b;
	*b = aux_a % aux_b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 9;
// 	b = 4;
// 	int *ponta = &a;
// 	int *pontb = &b;
// 	ft_ultimate_div_mod(ponta, pontb);

// 	printf("valor da divisao salvo em a %d\n", a);
// 	printf("valor do modulo salvo em b %d\n", b);
// 	return (0);
// }