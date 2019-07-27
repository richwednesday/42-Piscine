/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 14:43:40 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/25 22:33:09 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

void	ft_putstr(int fd, char *str);
int		ft_atoi(char *str);
void	ft_display_lines(char *file);
void	ft_display_chars(char *file, int num, char c);
void	ft_print_error(char *file, char *str);

#endif
