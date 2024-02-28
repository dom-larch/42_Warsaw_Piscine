/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 11:49:42 by dmodrzej          #+#    #+#             */
/*   Updated: 2024/01/20 16:58:40 by dmodrzej         ###   ########.fr       */
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
			if ((a == 1 && b == 1) || (a > 1 && b > 1 && a == y && b == x))
				ft_putchar('/');
			else if ((a == 1 && b == x) || (a == y && b == 1))
				ft_putchar('\\');
			else if ((a == 1) || (b == 1) || (a == y) || (b == x))
				ft_putchar('*');
			else
				ft_putchar(' ');
			b++;
		}
		ft_putchar('\n');
		b = 1;
		a++;
	}
}
