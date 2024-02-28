/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 17:55:28 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 13:43:29 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char	**create_matrix(int size)
{
	int		i;
	char	**matrix;

	matrix = malloc(sizeof(char *) * size);
	i = 0;
	while (i < size)
	{
		matrix[i] = malloc(sizeof(char) * size + 1);
		i++;
	}
	return (matrix);
}

char	**clone_matrix(char **matrix, int size)
{
	char	**clone;
	int		i;
	int		ii;

	clone = create_matrix(size);
	i = 0;
	while (i < size)
	{
		ii = 0;
		while (ii < size + 1)
		{
			clone[i][ii] = matrix[i][ii];
			ii++;
		}
		i++;
	}
	return (clone);
}

void	free_matrix(char **matrix, int size)
{
	int	i;

	i = 0;
	while (i < size)
		free(matrix[i++]);
	free(matrix);
}

void	print_matrix(char **matrix, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size + 1)
		{
			ft_putchar(matrix[i][j]);
			j++;
		}
		i++;
	}
}
