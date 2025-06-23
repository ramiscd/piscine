/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 17:52:52 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/06 16:02:18 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// #include <stdio.h>
// int main(void)
// {
// 	char origem[] = "Hello";
// 	char destino[6];
// 	char *src = origem;
// 	char *dest =  destino;
// 	printf("endereço origem %p\n", &origem);
// 	printf("endereço destino %p\n\n", &destino);
// 	char *res = ft_strcpy(dest, src);
// 	printf("\n\nres %s\n\n", res);
// 	return (0);
// }