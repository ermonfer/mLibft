#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "../source_code/ft_strnstr.c"
#include "../source_code/ft_strlen.c"
#include "../source_code/ft_strncmp.c"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s cadena1 cadena2 longitud\n", argv[0]);
        return 1;
    }

    const char *haystack = argv[1];
    const char *needle = argv[2];
    size_t len = (size_t)atoi(argv[3]);

    char *result_ft_strnstr = ft_strnstr(haystack, needle, len);
    char *result_strnstr = strnstr(haystack, needle, len);

    printf("Cadena: \"%s\", Subcadena: \"%s\", Longitud: %zu\n", haystack, needle, len);
    printf("  Resultado de strnstr de la biblioteca ft: %s\n", result_ft_strnstr);
    printf("  Resultado de strnstr de la biblioteca estándar: %s\n", result_strnstr);

    if (result_ft_strnstr == result_strnstr) {
        printf("  Los resultados son iguales.\n");
    } else {
        printf("  Los resultados son diferentes.\n");
    }

    return 0;
}
