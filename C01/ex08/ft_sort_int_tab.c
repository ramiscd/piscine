/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 14:23:12 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/05 17:40:15 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	// printf("%d\n", *tab);
	int	i;
	int j;

	i = 0;

	while (i < size)
	{
		if (tab[i] < tab[i + 1])
		{
			(tab[i], tab[i + 1]) = (tab[i + 1], tab[i]);
		}
		i++;
	}

}

#include <stdio.h>
int	main()
{
	int tab[6] = {7, 6, 9, 4, 3, 2};
	int *ptab = tab;
	int size = 6;
	ft_sort_int_tab(ptab, size);
	// printf("%s\n", tab);
	int k = 0;

	return (0);
}