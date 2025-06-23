/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdamasce <rdamasce@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 10:34:48 by rdamasce          #+#    #+#             */
/*   Updated: 2025/06/11 11:59:55 by rdamasce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest_len < size && dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len == size)
		return (size + src_len);
	while (src[i] != '\0' && (dest_len + i) < (size -1))
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

/* #include <stdio.h>
int	main(void)
{
	char dest[15] = "ola ";
	char src[] = "mundo";

	char *pdest = dest;
	char *psrc = src;

	char res = ft_strlcat(pdest, psrc, 15);
	printf("contagem de chars: %d\n", res);
	printf("%s", dest);
	return (0);
} */