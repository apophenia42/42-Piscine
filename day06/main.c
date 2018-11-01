
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}


int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 != '\0')
		return (*s1);
	if (*s2 != '\0')
		return (-*s2);
	return (0);
}
void	ft_print_params(char *y[], int nb)
{
	int j;
	
	j = 1;
	while (j <= nb)
	{
		ft_putstr(y[j++]);
		ft_putchar('\n');
	}

}

void	ft_sort_params(char *x[], int nb)
{
	int j;
	int i;
	char *swap;

	i = 0;
	while (i < nb)
	{
		j = 1;
		while (j < nb)
		{
			if (ft_strcmp(x[j],x[j + 1]) > 0)
			{
				swap = x[j];
				x[j] = x[j + 1];
				x[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
	ft_print_params(x, nb);
	
}

int		main(int argc, char **argv)
{
	(void)argc;
	ft_sort_params(argv, argc - 1);
	return (0);
}

