/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sneznal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:03:19 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 18:42:14 by sneznal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	verification(char *argv)
{
	int		fd;
	char	*buffer;
	char	**matrix;
	int		idontknow;
	int		i;
	int		j;
	char	*strsize;
	int		size;
	char	empty;
	char	obstacle;
	char	square;
	buffer = malloc(sizeof(char) * 15);
	if (buffer == NULL)
	{
		ft_printstr("Not enough memory");
		return (0);
	}
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		ft_printstr("error: opening");
		free (buffer);
		return (0);
	}
	i = 0;
	while (1)
	{
//		ft_putnbr(i);
		idontknow = read(fd, &buffer[i], 1);
		if (idontknow == -1)
		{
			ft_printstr("error reading");
			free(buffer);
			return (0);
		}
		if (buffer[i] != '\n')
		{
			i++;
			continue;
		}
		else
			break;
	}
	j = 0;
	while (buffer[j] != '\0')
	{
		if (buffer[j] < 32 && buffer[j] != '\n')
		{
			ft_printstr("non-printable characters");
			free (buffer);
			return (0);
		}
		j++;
	}
	j = 0;
	strsize = malloc(sizeof(char) * (i - 3));
	while (i - 3 > j)
	{
		if (buffer[j] < '0' || buffer[j] > '9')
		{
			ft_printstr("error: expected numbers");
			free(buffer);
			return (0);
		}
		strsize[j] = buffer[j];
		j++;
	}
	size = ft_atoi(strsize);
	matrix = create_matrix(size);
	i = 0;
	while (size > i)
	{
		idontknow = read(fd, matrix[i], size + 1);
		i++;
	}
	matrix = find_square(matrix, size, buffer);
	print_matrix(matrix, size);
	free_matrix(matrix, size);
	free(strsize);
	free(buffer);
	close(fd);
	return (1);
}
