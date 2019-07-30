/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/27 16:33:30 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/29 19:12:17 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	execute(char *prog, int *mem)
{
	int loop;

	while (*prog)
	{
		if (*prog == '>')
			mem++;
		else if (*prog == '<')
			mem--;
		else if (*prog == '+')
			*mem += 1;
		else if (*prog == '-')
			*mem -= 1;
		else if (*prog == '.')
			write(1, &*mem, 1);
		else if (*prog == '[' && !*mem)
		{
			loop = 1;
			while (loop)
			{
				prog++;
				if (*prog == ']') 
					loop -= 1;
				else if (*prog == '[') 
					loop += 1;
			}
		}
		else if (*prog == ']' && *mem)
		{
			loop = 1;
			while (loop)
			{
				prog--;
				if (*prog == '[')
					loop -= 1;
				else if (*prog == ']')
				   loop += 1;	
			}
		}
		prog++;
	}
}

int		main(int argc, char **argv)
{
	int *mem;

	if (argc == 2)
	{
		mem = (int *)malloc(sizeof(int) * 2048);
		execute(argv[1], mem);
		free(mem);
	}
	else
		write(1, "\n", 1);
	return (0);
}
