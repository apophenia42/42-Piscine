/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 18:17:28 by haltall           #+#    #+#             */
/*   Updated: 2018/08/23 11:14:02 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
 write(1, &c, 1);
}

int main()
{
char number[3];

    number[0] = '0';
    while (number[0] <= '7')
    {
        number[1] = number[0] + 1;
        while (number[1] <= '8')
        {
            number[2] = number[1] + 1;
            while (number[2] <= '9')
            {
                ft_putchar(number[0]);
                ft_putchar(number[1]);
                ft_putchar(number[2]);
                if (!(number[0] == '7' && number[1] == '8' && number[2] == '9'))
                {
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                number[2]++;
            }
            number[1]++;
        }
        number[0]++;
    }
        }
