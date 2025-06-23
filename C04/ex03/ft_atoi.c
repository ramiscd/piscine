/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 10:52:30 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/16 11:27:56 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int		i;
	int		signal;
	long	result;

	i = 0;
	signal = 1;
	result = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signal *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (signal * result);
}

/* #include <stdio.h>
int	main(int argc, char **argv)
{
	printf("argc = %d \n", argc);
	printf("argv = %s \n\n", argv[1]);

	char *str = argv[1];
 	int result = ft_atoi(str);
	printf("Valor convertido para inteiro: %d", result);
	return (0);
} */
