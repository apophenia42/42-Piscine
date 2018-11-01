/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 13:09:02 by haltall           #+#    #+#             */
/*   Updated: 2018/08/30 13:09:03 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	int i;
	int j;
	int v;

	if (argc == 1)
	{
		*argv = "";
		return (*argv);
	}
	argv[argc] = (char*)malloc(sizeof(*argv) * (argc));
	i = 1;
	v = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			argv[argc][v++] = argv[i][j++];
		}
		argv[argc][v++] = '\n';
		j++;
		i++;
	}
	argv[argc][--v] = '\0';
	return (argv[argc]);
}
