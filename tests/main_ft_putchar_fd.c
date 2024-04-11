#include "../source_code/ft_putchar_fd.c"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    if (argc != 3)
    {
        printf("Uso: ./main_ft_putchar_fd <caracter> <descriptor de archivo>\n");
        return 1;
    }

    char c = argv[1][0];
    int fd = atoi(argv[2]);

    ft_putchar_fd(c, fd);

    return 0;
}
