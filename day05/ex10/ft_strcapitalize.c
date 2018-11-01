/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 11:47:47 by haltall           #+#    #+#             */
/*   Updated: 2018/08/28 11:47:49 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') ||
			(str[i] >= 'A' && str[i] <= 'Z'))
		{
			if ((str[i - 1] >= 'a' && str[i - 1] <= 'z') ||
					(str[i - 1] >= 'A' && str[i - 1] <= 'Z') ||
					(str[i - 1] >= '0' && str[i - 1] <= '9'))
			{
				if ((str[i] >= 'A' && str[i] <= 'Z'))
					str[i] += 32;
			}
			else if (str[i] >= 'a' && str[i] <= 'z')
				str[i] -= 32;
		}
		i++;
	}
	return (str);
}
