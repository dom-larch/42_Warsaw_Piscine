/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:11:53 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 20:35:17 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	main(int argc, char **argv)
{
	int		i;

	i = 0;
	if (argc > 1)
	{
		while (++i < argc)
		{
			if (verification(argv[i]))
			{
				ft_putchar('\n');
			}
			else
			{
				ft_printstr("map error\n");
			}
		}
	}
	else
	{
		ft_printstr("error\n");
	}	
	return (0);
}
