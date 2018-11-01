/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 21:52:38 by haltall           #+#    #+#             */
/*   Updated: 2018/08/28 21:52:45 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_rev_params(char *x[], int i)
{
	while (i > 0)
	{
		ft_putstr(x[i]);
		ft_putchar('\n');
		i--;
	}
}

int		main(int argc, char **argv)
{
	int i;

	(void)argc;
	i = 1;
	ft_rev_params(argv, argc - 1);
	return (0);
}
