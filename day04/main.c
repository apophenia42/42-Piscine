/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haltall <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 11:01:42 by haltall           #+#    #+#             */
/*   Updated: 2018/08/25 22:20:50 by haltall          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>



int    ft_fib(int nb) {


    int n = nb-1;
    int flag = 1;

    while (n > 2)
    {
        if (nb % n == 0)
            flag = 0;
		n -= 2;

    }
    if (nb <= 1)
      flag = 0;
return flag;


}

int main()
{
    printf("%d", ft_fib(2147483647));

    return 0;
}
