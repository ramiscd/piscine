/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/16 14:45:06 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/17 15:25:00 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 1)
	{
		return (index);
	}
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

/* #include <stdio.h>
int	main (void)
{
	int index = 9;

	//0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144
	int res = ft_fibonacci(index);
	if (index >= 0)
		printf("index %d equivale a %d.\n", index, res);
	else
		printf("Indice invalido, passe um indice valido. res = %d", res);
	return (0);
} */
