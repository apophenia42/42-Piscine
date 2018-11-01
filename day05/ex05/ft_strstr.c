/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/28 08:50:19 by haltall           #+#    #+#             */
/*   Updated: 2018/08/28 08:50:29 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int found;

	i = 0;
	found = 1;
	while (to_find[i])
		i++;
	while (*str)
	{
		while (*to_find != '\0')
			if (*to_find++ != *str++)
				found = 0;
		to_find -= i;
		str -= i;
		if (found == 1)
			return (str);
		found = 1;
		str++;
	}
	return (0);
}
