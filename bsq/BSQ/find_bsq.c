/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_bsq.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneznal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 19:02:58 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 19:47:57 by sneznal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

char	**find_square(char **matrix, int size, char *buffer)
{
	char	empty;
	char	obstacle;
	char	full;
	char	**clone;
	int		i;
	int		j;
	int		max_size;
	int		clone_size;
	int		*coordinates;
	int		*biggest_coordinates;

	max_size = 0;
	empty = buffer[ft_strlen(buffer) - 4];
	obstacle = buffer[ft_strlen(buffer) - 3];
	full = buffer[ft_strlen(buffer) - 2];
	i = 0;
	coordinates = malloc(sizeof(int) * 2);
	biggest_coordinates = malloc(sizeof(int) * 2);
	while (i < size - max_size)
	{
		j = 0;
		while (matrix[i][j] != '\n')
		{
			if (matrix[i][j] == empty)
			{
				clone = clone_matrix(matrix, size);
				coordinates[0] = i;
				coordinates[1] = j;
//				ft_putnbr(coordinates[0]);
//				ft_printstr(",");
//				ft_putnbr(coordinates[1]);
//				ft_printstr("	");
				clone_size = check_square(clone, size, coordinates, buffer);
				if (max_size < clone_size)
				{
					max_size = clone_size;
					biggest_coordinates[0] = i;
					biggest_coordinates[1] = j;
				//	ft_putnbr(biggest_coordinates[0]);
				//	ft_putnbr(biggest_coordinates[1]);
				//	ft_putchar('\n');
				}
				free_matrix(clone, size);
			}
			j++;
		}
		i++;
	}
	draw_square(matrix, max_size, biggest_coordinates, full);
	free (biggest_coordinates);
	free (coordinates);
	return (matrix);
}

int	check_square(char **matrix, int matrix_size, int *coordinates, char *buffer)
{
	int		col;
	int		row;
	int		square_size;
	char	obstacle;

	obstacle = buffer[ft_strlen(buffer) -3];
	row = coordinates[0];
	col = coordinates[1];
	square_size = 1;
	while (row < matrix_size && row - coordinates[0] < square_size)
	{
		if (square_size > matrix_size - coordinates[0])
		{
			square_size = matrix_size - coordinates[0];
//			ft_putchar('B');
//			ft_putnbr(square_size);
		}
		col = coordinates[1];
		while ((col < matrix_size && matrix[row][col] != obstacle)
				&& row == coordinates[0])
		{
			square_size = col - coordinates[1] + 1;
//			ft_putnbr(square_size);
//			ft_putchar(' ');
			col++;
		}
		if (row - coordinates[0] <= square_size)
		{
			col = coordinates[1];
			while (col - coordinates[1] < square_size)
			{

				if (matrix[row][col] == obstacle)
				{
//					ft_putnbr(square_size);
					if (row - coordinates[0] + 1 != square_size)
						square_size = col - coordinates[1];
					else
						square_size = row - coordinates[0];
//					ft_putchar('A');
//					ft_putnbr(square_size);
//					ft_putnbr(row - coordinates[0]);
				}
				col++;
			}
		}
		row++;
	}
//	ft_putchar('\n');
	return (square_size);
}

void	draw_square(char **matrix, int size, int *coordinates, char full)
{
	int	row;
	int	col;
	row = coordinates[0];
	while (row - coordinates[0] < size)
	{
		col = coordinates[1];
		while (col - coordinates[1] < size)
		{
			matrix[row][col] = full;
			col++;
		}
		row++;
	}
}
