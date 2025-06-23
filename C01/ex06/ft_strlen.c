/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:29:36 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/03 09:34:58 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{

	int count_char = 0;

	while(str[count_char])
	{
		count_char++;
	}

	return (count_char);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char str[] = "string";

// 	char *pstr = &str[0];

// 	int result;

// 	result = ft_strlen(pstr);

// 	printf("%d", result);
	
// 	return (0);
// }