#include <stdio.h>
#include <stdlib.h>
#include "../source_code/libft.h"
#include "../source_code/ft_strlen.c"
#include "../source_code/ft_memcpy.c"
#include "../source_code/ft_strdup.c"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s <cadena>\n", argv[0]);
        return 1;
    }

    const char *input = argv[1];
    char *result = ft_strdup(input);

    if (result == NULL) {
        printf("No se pudo duplicar la cadena.\n");
        return 1;
    }

    printf("Cadena original: %s\n", input);
    printf("Copia de la cadena: %s\n", result);

    free(result); // Liberar la memoria asignada por ft_strdup

    return 0;
}
