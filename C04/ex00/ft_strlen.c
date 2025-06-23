/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 15:14:05 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/15 10:29:27 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* #include <stdio.h>
int	main(void)
{
	char str[] = "Olá, mundo!";
	char *pstr = str;
	int comprimento = ft_strlen(pstr);

	printf("O comprimento da string é: %d\n", comprimento);
	return 0;
} */