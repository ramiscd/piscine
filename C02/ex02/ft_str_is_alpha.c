/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 09:17:32 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/06 16:05:30 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 1;
	while (str[i] != '\0')
	{
		if (!(((str[i] >= 'a') && (str[i] <= 'z'))
				|| ((str[i] >= 'A') && (str[i] <= 'Z'))))
		{
			res = 0;
		}
		i++;
	}
	return (res);
}

// #include <stdio.h>
// int main(void)
// {
// 	char hello[5] = "hello";

// 	char *str = hello;

// 	int res = ft_str_is_alpha(str);

// 	printf("res: %d\n", res);

// 	return (0);
// }