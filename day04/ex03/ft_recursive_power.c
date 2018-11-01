/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 14:36:30 by haltall           #+#    #+#             */
/*   Updated: 2018/08/25 22:24:59 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 && nb > 0)
		return (1);
	else if (power == 0 || nb < 0 || power < 0)
		return (0);
	if (power > 0)
		return (nb * ft_recursive_power(nb, (power - 1)));
	else
		return (1);
}
