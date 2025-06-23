/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 16:42:46 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/05 12:21:27 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	val;

	i = 0;
	val = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 32 && str[i] <= 126))
		{
			val = 0;
		}
		i++;
	}
	return (val);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char string[] = "teste";
// 	char *str = string;

// 	ft_str_is_printable(str);

// 	return 0;
// }	