/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 11:06:16 by haltall           #+#    #+#             */
/*   Updated: 2018/08/24 14:37:24 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>


void	ft_putchar(char c)
{
	write (1, &c, 1);
}
void play(int *a, int *b)
{
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int	main(void)
{
	int a,b;

	a = 0;
	b = 9;
printf("a = %d, b = %d     ",a,b);
	play(&a,&b);
	printf("a = %d, b = %d  ",a,b);
	
	
		return 0;
}

