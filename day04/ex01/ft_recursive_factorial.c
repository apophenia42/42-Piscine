/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 13:34:32 by haltall           #+#    #+#             */
/*   Updated: 2018/08/25 13:53:58 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb >= 13)
		return (0);
	else if (nb == 0)
		return (1);
	if (nb >= 0)
		return (nb * ft_recursive_factorial(nb - 1));
	else
		return (1);
}
