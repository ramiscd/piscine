/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/01 16:14:49 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/02 16:53:00 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int	*pa;
// 	int	*pb;

// 	a = 1;
// 	b = 2;
// 	pa = &a;
// 	pb = &b;
// 	printf("valor de a antes %d\n", a);
// 	printf("valor de b antes %d\n\n", b);
// 	ft_swap(pa, pb);
// 	printf("valor de a depois %d\n", a);
// 	printf("valor de b depois %d\n", b);
// 	return (0);
// }