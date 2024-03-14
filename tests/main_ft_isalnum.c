#include "../source_code/ft_isalnum.c"
#include "../source_code/ft_isalpha.c"
#include "../source_code/ft_isdigit.c"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 2)
	{
        printf("Uso: %s argumentos", argv[0]);
        return 1;
    }

    int c = argv[1][0];

    // Comparar los resultados
    if (ft_isalnum(c) == isalnum(c))
        printf("Las funciones produjeron los mismos resultados.\n");
	else
        printf("Las funciones NO produjeron los mismos resultados.\n");
    return 0;
}
