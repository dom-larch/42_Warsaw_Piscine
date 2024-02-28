/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 16:47:55 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/02/01 15:40:30 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	dest_length_calc(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dest_length;

	i = 0;
	dest_length = 0;
	while (dest[i] != '\0')
	{
		i++;
		dest_length++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		i++;
		dest_length++;
	}
	return (dest_length);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dest_length;

	dest_length = dest_length_calc(dest, src);
	i = 0;
	j = 0;
	if (size == 0)
		return (dest_length);
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < (size - 1) && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (src[j] == '\0' || j <= size)
		dest[i] = '\0';
	return (dest_length);
}

/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("%s", "Enter exactly 2 strings");
	}
	else
	{
		printf("%d", ft_strlcat(argv[1], argv[2], 6));
	}
	return (0);
}
*/