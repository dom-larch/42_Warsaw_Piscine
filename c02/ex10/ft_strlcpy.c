/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 18:46:14 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/30 15:33:46 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_length;

	i = 0;
	src_length = 0;
	if (size == 0)
		return (0);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[src_length] != '\0')
	{
		src_length++;
	}
	return (src_length);
}

/*
int	main(void)
{
	unsigned int	result;
	char			src[] = "";
	char			dest[100];

	result = ft_strlcpy(dest, src, 6);
	printf("%s\n", dest);
	printf("%d\n", result);
	return (0);
}
*/