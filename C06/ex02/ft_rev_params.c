/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 10:08:34 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/18 13:34:01 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (argc > 1)
	{
		while (argv[argc -1][i])
		{
			write(1, &argv[argc -1][i], 1);
			i++;
		}
		write(1, "\n", 1);
		argc --;
		i = 0;
	}
	return (0);
}
