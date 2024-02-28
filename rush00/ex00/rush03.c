/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:49:42 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/20 15:58:18 by dmodrzej         ###   ########.fr       */
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
	while (a <= y)
	{
		while (b <= x)
		{
			if ((a == 1 && b == 1) || (a == y && b == 1))
				ft_putchar('A');
			else if ((a == 1 && b == x) || (a == y && b == x))
				ft_putchar('C');
			else if ((a == 1) || (a == y) || (b == 1) || (b == x))
				ft_putchar('B');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		b = 1;
		a++;
	}
}
