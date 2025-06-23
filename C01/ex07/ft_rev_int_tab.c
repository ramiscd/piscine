/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:47:43 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/03 13:44:52 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size)
{
	int i = 0;
	int j = 4;
	int temp[5];

	while(i < size)
	{
		temp[i] = tab[j];
		i++;
		j--;	
	}

	j= 0;

	while(j < size)
	{
		tab[j] = temp[j];
		j++;
	}
}

int main ()
{
	int my_numbers[5] = {10, 20, 30, 40, 50};

	int *ptr_numbers = &my_numbers[0];
	int size = 5;

	ft_rev_int_tab(ptr_numbers, size);

	int k = 0;

	while( k < size)
	{
		printf("%d ", my_numbers[k]);
		k++;
	}
	return (0);
}