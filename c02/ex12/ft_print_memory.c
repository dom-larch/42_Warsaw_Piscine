/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 12:10:31 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/29 14:54:03 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	hex_to_decimal(char a)
{
	char	*hex_char;

	hex_char = "0123456789ABCDEF";
	ft_putchar(hex_char[a / 16]);
	ft_putchar(hex_char[a % 16]);
}

void	ft_putnum(char *number)
{
	char	c;

	c = number + 48;
	write(1, &c, 1);
}

void	*ft_print_memory(char *addr, unsigned int size)
{
	unsigned int 	i;
	int 			j;
	int				g;
	int				h;
	char			*address;
	
	address = &addr[i];
	i = 0;
	while (i < size)
	{
		h = 0;
		while (h < 16)
		{
			ft_putnum(address);
			h++;
			i++;
		}
		i = i - 16;
		ft_putchar(' ');
		j = 1;
		g = 1;
		if (addr[i] == ' ')
			i++;
		while (j <= 8)
		{
			hex_to_decimal(addr[i]);
			i++;
			hex_to_decimal(addr[i]);
			ft_putchar(' ');
			i++;
			j++;
		}
		i = i - 16;
		while (g <= 16)
		{
			ft_putchar(addr[i]);
			i++;
			g++;
		}
		ft_putchar('\n');
	}
}


int	main(void)
{
	char			*source;
	unsigned int	size;

	source = "Bonjour les amin ches...c. est fou.tout.ce qu on peut faire avec.";
	size = 75;
	ft_print_memory(source, size);
	return (0);
}
