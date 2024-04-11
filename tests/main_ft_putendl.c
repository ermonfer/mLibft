#include "../source_code/ft_putendl_fd.c"
#include "../source_code/ft_strlen.c"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Uso: ./main_ft_putendl_fd <caracter> <descriptor de archivo>\n");
        return 1;
    }

    char *s = argv[1];
    int fd = atoi(argv[2]);

    ft_putendl_fd(s, fd);

    return 0;
}
