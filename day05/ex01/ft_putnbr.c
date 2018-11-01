/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/27 13:09:35 by haltall           #+#    #+#             */
/*   Updated: 2018/08/27 16:06:50 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_printnbr(long int temp)
{
	int			div;
	long int	temp2;
	int			ln;

	ln = 1;
	div = 1;
	temp2 = temp;
	while (temp / 10 > 0)
	{
		ln++;
		temp /= 10;
		div *= 10;
	}
	temp = temp2;
	while (ln > 0)
	{
		if (temp / div > 0)
			ft_putchar(temp / div + '0');
		else
			ft_putchar(temp % 10 + '0');
		ln--;
		temp -= (temp / div) * div;
		div /= 10;
	}
}

void	ft_putnbr(int nb)
{
	long int temp;
	long int temp2;

	if (nb < 0)
	{
		ft_putchar('-');
		temp = nb;
		temp *= -1;
		temp2 = temp;
	}
	else
	{
		temp = nb;
		temp2 = temp;
	}
	ft_printnbr(temp2);
}
