/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwok <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/23 02:18:52 by jiwok             #+#    #+#             */
/*   Updated: 2019/07/23 21:43:38 by jiwok            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	sum(int a, int b);
void	subtract(int a, int b);
void	mul(int a, int b);
void	div(int a, int b);
void	mod(int a, int b);

void	ft_array_pointers(int op_i, int nb1, int nb2)
{
	void (*p[5]) (int x, int y);

	p[0] = sum;
	p[1] = subtract;
	p[2] = mul;
	p[3] = div;
	p[4] = mod;
	(*p[op_i])(nb1, nb2);
	ft_putchar('\n');
}

int		main(int argc, char *argv)
{
	int		i;
	char	*op;

	op = "+-*/%\0";
	if (argc == 4)
	{
		i = 0;
		while (op[i] != '\0')
		{
			if (*argv[2] == op[i])
				break ;
			i += 1;
		}
		if (i == 5)
		{
			ft_putchar('0');
			ft_putchar('\n');
			return (0);
		}
		ft_array_pointers(i, ft_atoi(argv[1]), ft_atoi(argv[3]));
	}
}
