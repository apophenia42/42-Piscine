#include <stdio.h>
char    *ft_concat_params(int argc, char **argv)
{
    int i;
    int j;
    int v;

    if (argc == 0)
        return (0);
    argv[argc] = (char*)malloc(sizeof(*argv) * (argc));
    i = 0;
    j = 0;
    v = 0;

    while (i < argc)
    {
        j = 0;
        while (argv[i][j])
        {
            argv[argc][v++] = argv[i][j];
            j++;
        }
        argv[argc][v++] = '\n';
        j++;
        i++;
    }
    argv[argc][--v] = '\0';
    return (argv[argc]);
}

int main() {
  char* arr[5] = {"NO", "YES", "ARG2", "ARG3", NULL};
  printf("%s", ft_concat_params(4, arr));
  return 0;
}