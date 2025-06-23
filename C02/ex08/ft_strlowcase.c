/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 08:55:56 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/05 12:47:09 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] +32;
		}
		i++;
	}
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char str[] = "HeLLO";
// 	char *pstr = str;

// 	ft_strlowcase(pstr);

// 	return 0;
// }