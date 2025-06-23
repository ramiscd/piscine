/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 11:15:44 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/05 12:09:56 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	if (size != 0)
	{
		while ((src[i] != '\0') && (i < (size - 1)))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (j);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	dest;
// 	char	src[20] = "String";
// 	unsigned int	size;

// 	size = sizeof src / sizeof src[0];
// 	printf("Size: %d\n", (ft_strlcpy(&dest, src, size)));
// 	printf("Dest = %s\n", &dest);
// 	return (0);
// }