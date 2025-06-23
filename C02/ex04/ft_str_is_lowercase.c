/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:43:45 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/05 12:25:48 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	res;

	res = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			res = 0;
		}
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int main()
// {
// 	char string[] = "Hello";

// 	char *str = string; 

// 	ft_str_is_lowercase(str);
// 	return (0);
// }