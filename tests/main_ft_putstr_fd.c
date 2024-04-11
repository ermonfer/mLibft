#include "../source_code/ft_putstr_fd.c"
#include "../source_code/ft_strlen.c"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Uso: ./main_ft_putstr_fd <caracter> <descriptor de archivo>\n");
        return 1;
    }

    char *s = argv[1];
    int fd = atoi(argv[2]);

    ft_putstr_fd(s, fd);

    return 0;
}
