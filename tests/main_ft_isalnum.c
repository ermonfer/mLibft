#include "../source_code/ft_isalnum.c"
#include <ctype.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <valor>\n", argv[0]);
        return 1;
    }

    int c = argv[1][0];

    // Prueba de la función ft_isalnum
    int result_ft = ft_isalnum(c);
    int result_libc = isalnum(c);

    // Comparar los resultados
    if (result_ft == result_libc) {
        printf("Las funciones ft_isalnum y isalnum produjeron los mismos resultados.\n");
    } else {
        printf("Las funciones ft_isalnum y isalnum NO produjeron los mismos resultados.\n");
    }

    return 0;
}

