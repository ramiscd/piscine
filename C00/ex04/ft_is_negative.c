/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/29 17:37:13 by rdamasce          #+#    #+#             */
/*   Updated: 2025/05/29 19:46:38 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_is_negative(char n)
{
	char	p;
	char	a;

	p = 'P';
	a = 'N';
	if (n < 0)
	{
		write(1, &a, 1);
	}
	else
	{
		write(1, &p, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-1);
// 	return (0);
// }
