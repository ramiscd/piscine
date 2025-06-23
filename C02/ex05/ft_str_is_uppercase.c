/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 15:35:41 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/05 12:46:13 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	val;

	i = 0;
	val = 1;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			val = 0;
		}
		i++;
	}
	return (val);
}

// #include <stdio.h>
// int main()
// {
// 	char string[] = "HELLo";

// 	char *str = string;

// 	int res = ft_str_is_uppercase(str);
// 	printf("%d", res);
// 	return (0);
// }