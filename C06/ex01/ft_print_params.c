/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 16:00:15 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/18 15:14:53 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	k;

	i = argc -1;
	k = 1;
	while (k <= i)
	{
		j = 0;
		while (argv[k][j] != '\0')
		{
			write(1, &argv[k][j], 1);
			j++;
		}
		write(1, "\n", 1);
		k++;
	}
	return (0);
}
