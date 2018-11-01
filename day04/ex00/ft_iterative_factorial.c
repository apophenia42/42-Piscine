/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 12:11:35 by haltall           #+#    #+#             */
/*   Updated: 2018/08/25 12:28:52 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;
	int n;

	n = 1;
	result = nb;
	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb == 0)
	{
		return (1);
	}
	while (nb - n > 0)
	{
		result *= nb - n++;
	}
	return (result);
}
