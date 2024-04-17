e#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../source_code/libft.h"
#include "../source_code/ft_strncmp.c"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s cadena1 cadena2 n\n", argv[0]);
        return 1;
    }

    const char *cadena1 = argv[1];
    const char *cadena2 = argv[2];
    size_t n = (size_t)atoi(argv[3]);

    int resultado_ft_strncmp = ft_strncmp(cadena1, cadena2, n);
    int resultado_strncmp = strncmp(cadena1, cadena2, n);

    printf("Comparación de las primeras %zu caracteres de \"%s\" y \"%s\":\n", n, cadena1, cadena2);
    printf("  Resultado de ft_strncmp: %d\n", resultado_ft_strncmp);
    printf("  Resultado de strncmp: %d\n", resultado_strncmp);

    if (resultado_ft_strncmp == resultado_strncmp) {
        printf("  Los resultados son iguales.\n");
    } else {
        printf("  Los resultados son diferentes.\n");
    }

    return 0;
}
