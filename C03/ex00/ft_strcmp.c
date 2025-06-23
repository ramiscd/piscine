/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 09:11:23 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/11 09:37:20 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

/* #include <stdio.h>
int	main(void)
{
	char str1[] = "banana";
	char str2[] = "bananb";

	char *pstr1 = str1;
	char *pstr2 = str2;

	int res = ft_strcmp(pstr1, pstr2);
	printf("%d", res);
	return (0);
} */