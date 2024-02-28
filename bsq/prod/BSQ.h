/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQ.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmodrzej <dmodrzej@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 18:01:36 by sneznal           #+#    #+#             */
/*   Updated: 2024/02/07 21:17:13 by dmodrzej         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

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
int		verify_legend(char *buffer);
int		verify_chars(char *buffer);
void	solve_bsq(char *buffer, int fd);
char	*read_legend(int fd);
#endif
