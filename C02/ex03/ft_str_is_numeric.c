/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 10:35:52 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/05 12:26:30 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	val;

	val = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
// 	char numbers[] = "1234";
// 	char *str = numbers;
// 	ft_str_is_numeric(str);
// 	return (0);
// }