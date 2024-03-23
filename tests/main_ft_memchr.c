#include <stdio.h>
#include <string.h>
#include <stdlib.h> // Para la función atoi
#include "../source_code/libft.h"
#include "../source_code/ft_memchr.c"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s cadena caracter longitud\n", argv[0]);
        return 1;
    }

    const char *cadena = argv[1];
    char caracter = *argv[2];
    size_t longitud = (size_t)atoi(argv[3]);

    void *resultado_ft_memchr = ft_memchr(cadena, caracter, longitud);
    void *resultado_memchr = memchr(cadena, caracter, longitud);

    printf("Búsqueda de '%c' en \"%s\" con longitud %zu:\n", caracter, cadena, longitud);
    printf("  Resultado de ft_memchr: %p\n", resultado_ft_memchr);
    printf("  Resultado de memchr: %p\n", resultado_memchr);

    if (resultado_ft_memchr == resultado_memchr) {
        printf("  Los resultados son iguales.\n");
    } else {
        printf("  Los resultados son diferentes.\n");
    }

    return 0;
}

