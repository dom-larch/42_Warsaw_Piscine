/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:11:53 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 18:50:36 by sneznal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	main(int argc, char **argv)
{
	int		i;
	i = 0;
	while(++i < argc)
	{
		if (verification(argv[i]))
		{
//			execute something;
			ft_putchar('\n');
		}
		else
		{
			ft_printstr("map error\n");
		}
	}
	return (0);
}
