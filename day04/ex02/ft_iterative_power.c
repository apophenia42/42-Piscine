/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:27:59 by haltall           #+#    #+#             */
/*   Updated: 2018/08/25 15:29:52 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int result;

	result = nb;
	if (power == 0 && nb > 0)
		return (1);
	else if (power == 0 || nb < 0 || power < 0)
		return (0);
	while (--power > 0)
		result *= nb;
	return (result);
}
