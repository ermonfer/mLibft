#include "../source_code/ft_substr.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s <cadena> <inicio> <longitud>\n", argv[0]);
        return 1;
    }

    const char *cadena = argv[1];
    int inicio = atoi(argv[2]);
    size_t longitud = atoi(argv[3]);

    char *subcadena = ft_substr(cadena, inicio, longitud);
    if (subcadena == NULL) {
        printf("Error: No se pudo asignar memoria para la subcadena.\n");
        return 1;
    }

    printf("Subcadena de \"%s\" desde la posición %d con longitud %zu: \"%s\"\n",
           cadena, inicio, longitud, subcadena);

    free(subcadena); // Liberar memoria asignada por ft_substr
    return 0;
}
