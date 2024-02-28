/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 11:09:47 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/30 15:40:12 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_to_decimal(int a)
{
	char	*hex_char;

	hex_char = "0123456789abcdef";
	ft_putchar(hex_char[a / 16]);
	ft_putchar(hex_char[a % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] == 127)
		{
			ft_putchar('\\');
			hex_to_decimal(str[i]);
		}
		else
		{
			ft_putchar(str[i]);
		}
		i++;
	}
}

/*
int	main(void)
{
	char	*str;

	str = "Coucou\ntu 	vas 2bien ?";
	ft_putstr_non_printable(str);
	return (0);
}
*/