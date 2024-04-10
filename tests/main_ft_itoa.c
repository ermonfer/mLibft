#include "../source_code/ft_itoa.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("Uso: %s <numero1> <numero2> ...\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++)
    {
        int num = atoi(argv[i]);
        char *str_num = ft_itoa(num);
        if (str_num != NULL)
        {
            printf("Número: %d\n", num);
            printf("Cadena: %s\n", str_num);
            free(str_num);
        }
        else
        {
            printf("Error al convertir el número a cadena.\n");
        }
    }

    return 0;
}
