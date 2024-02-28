/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verification.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:03:19 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 21:17:54 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BSQ.h"

int	verification(char *argv)
{
	char	*buffer;
	int		fd;
	int		i;
	int		size;

	buffer = malloc(sizeof(char) * 32);
	if (buffer == NULL)
		return (0);
	fd = open(argv, O_RDONLY);
	if (fd == -1)
	{
		free (buffer);
		return (0);
	}
	buffer = read_legend(fd);
	if (!verify_legend(buffer))
	{
		close(fd);
		return (0);
	}
	solve_bsq(buffer, fd);
	close(fd);
	return (1);
}

void	solve_bsq(char *buffer, int fd)
{
	int		size;
	int		i;
	int		idontknow;
	char	**matrix;

	size = ft_atoi(buffer);
	matrix = create_matrix(size);
	i = 0;
	while (size > i)
	{
		idontknow = read(fd, matrix[i], size + 1);
		i++;
	}
	print_matrix(matrix, size);
	free_matrix(matrix, size);
	free(buffer);
}

/*
void	solve_bsq_stdin(char *buffer)
{
	int		size;
	int		i;
	int		idontknow;
	char	**matrix;

	size = ft_atoi(buffer);
	matrix = create_matrix(size);
	i = 0;
	while (size > i)
	{
		idontknow = read(STDIN_FILENO, matrix[i], size + 1);
		i++;
	}
	print_matrix(matrix, size);
	free_matrix(matrix, size);
	free(buffer);
}

int	verification_stdin(void)
{
	char	*buffer;
	int		fd;
	int		i;
	int		size;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	buffer = read_legend_stdin();
	if (!verify_legend(buffer))
		return (0);
	solve_bsq_stdin(buffer);
	return (1);
}

char	*read_legend_stdin(void)
{
	int		i;
	int		idontknow;
	char	*buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
		return (0);
	i = 0;
	while (1)
	{
		idontknow = read(STDIN_FILENO, &buffer[i], 1);
		if (idontknow == -1)
		{
			free(buffer);
			return (0);
		}
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
*/

char	*read_legend(int fd)
{
	int		i;
	int		idontknow;
	char	*buffer;

	buffer = malloc(sizeof(char) * 32);
	i = 0;
	while (1)
	{
		idontknow = read(fd, &buffer[i], 1);
		if (idontknow == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		if (buffer[i] == '\n')
			break ;
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}

int	verify_legend(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(buffer) <= 3)
		return (0);
	while (buffer[i] != '\0')
	{
		if (buffer[i] < 32 || buffer[i] == ' ')
		{
			free (buffer);
			return (0);
		}
		i++;
	}
	if (!verify_chars(buffer))
		return (0);
	return (1);
}

int	verify_chars(char *buffer)
{
	int	i;
	int	j;
	int g;

	i = ft_strlen(buffer) - 3;
	j = 0;
	while (i > j)
	{
		if (buffer[j] < '0' || buffer[j] > '9')
		{
			free(buffer);
			return (0);
		}
		j++;
	}
	j = 0;
	while (buffer[i] != '\0')
	{
		j = i + 1;
		if (buffer[i] == buffer[j])
			return (0);
		i++;
	}
	return (1);
}
