
#include <stdio.h>
#include <stdlib.h> // Para la función atoi
#include <string.h> // Para la función memcmp
#include "../source_code/libft.h"
#include "../source_code/ft_memcmp.c"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s cadena1 cadena2 longitud\n", argv[0]);
        return 1;
    }

    const char *cadena1 = argv[1];
    const char *cadena2 = argv[2];
    size_t longitud = (size_t)atoi(argv[3]);

    int resultado_ft_memcmp = ft_memcmp(cadena1, cadena2, longitud);
    int resultado_memcmp = memcmp(cadena1, cadena2, longitud);

    printf("Comparando \"%s\" y \"%s\" con longitud %zu:\n", cadena1, cadena2, longitud);
    printf("  Resultado de ft_memcmp: %d\n", resultado_ft_memcmp);
    printf("  Resultado de memcmp: %d\n", resultado_memcmp);

    if (resultado_ft_memcmp == resultado_memcmp) {
        printf("  Los resultados son iguales.\n");
    } else {
        printf("  Los resultados son diferentes.\n");
    }

    return 0;
}

