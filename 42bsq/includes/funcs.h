/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/28 16:15:17 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/31 22:57:32 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCS_H
# define FUNCS_H

typedef struct		s_sqre
{
	int				i;
	int				j;
	int				size;
}					t_sqre;

typedef struct		s_mem
{
	char			**arr;
	int				**sizearr;
}					t_mem;

int					ft_atoi(char *str);
int					ft_read_input(void);
int					size_map(t_mem a, char *defs, int nrows, int ncols);

#endif
