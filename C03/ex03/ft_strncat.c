/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 10:24:54 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/11 09:48:40 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0' && nb > j)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest [i + j] = '\0';
	return (dest);
}

/* #include <stdio.h>
int	main(void)
{
	char s1[20] = "comer ";
	char s2[] = "banana";

	char *ps1 = s1;
	char *ps2 = s2;

	unsigned int size = 4;

	char *res = ft_strncat(ps1, ps2, size);

	printf("dado recebido da func: %s \n", res);
	return (0);
} */