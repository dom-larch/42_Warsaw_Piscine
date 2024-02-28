/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:49:42 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/24 13:51:40 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		a;
	int		b;

	a = 1;
	b = 1;
	if (x > 0 && y > 0)
	{
	while (a <= y)
	{
		while (b <= x)
		{
			if ((a == 1 && b == 1) || (a == y && b == 1))
				ft_putchar('o');
			else if ((a == 1 && b == x) || (a == y && b == x))
				ft_putchar('o');
			else if ((a == 1) || (a == y))
				ft_putchar('-');
			else if ((b == 1) || (b == x))
				ft_putchar('|');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		b = 1;
		a++;
	}
	}
	else
	{
		ft_putchar('E');
		ft_putchar('r');
		ft_putchar('r');
		ft_putchar('o');
		ft_putchar('r');
	}
}
