/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:01:36 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 15:47:43 by sneznal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ
#define BSQ

#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

char	**create_matrix(int size);
char	**clone_matrix(char **matrix, int size);
void	free_matrix(char **matrix, int size);
void	ft_putchar(char c);
void	ft_printstr(char *str);
void	ft_putnbr(int nb);
int		ft_atoi(char *str);
void	print_matrix(char **matrix, int size);
int		verification(char *file);
int		ft_strlen(char *str);
char	**find_square(char **matrix, int size, char *buffer);
int		check_square(char **clone, int size, int *coordinates, char *buffer);
void	draw_square(char **matrix, int size, int *coordinates, char full);
#endif
