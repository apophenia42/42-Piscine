/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 21:16:44 by haltall           #+#    #+#             */
/*   Updated: 2018/08/29 21:16:45 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *nb;
	int c;
	int i;

	c = min;
	i = 0;
	if (min >= max)
		return (0);
	nb = (int*)malloc(sizeof(*nb) * (max - min));
	while (c < max)
	{
		nb[i++] = c++;
	}
	return (nb);
}
