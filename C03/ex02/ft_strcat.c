/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 08:31:10 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/11 12:00:21 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *str)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (str[j] != '\0')
	{
		dest[i] = str[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char	s1[50] = "comer ";
	char	s2[] = "banana";

	char	*ps1 = s1;
	char	*ps2 = s2;

	char *res = ft_strcat(ps1, ps2);
	printf("dest fora da funcao %s\n", res);

	return (0);
} */
