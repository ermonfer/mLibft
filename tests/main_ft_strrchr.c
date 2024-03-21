
#include <stdio.h>
#include <string.h>
#include "../source_code/libft.h"
#include "../source_code/ft_strrchr.c"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s cadena caracter\n", argv[0]);
        return 1;
    }

    const char *cadena = argv[1];
    char caracter = *argv[2];

    // Utilizando ft_strrchr
    char *ptr_ft_strrchr = ft_strrchr(cadena, caracter);

    // Utilizando la función estándar strrchr
    char *ptr_strrchr = strrchr(cadena, caracter);

    printf("Cadena: \"%s\", Caracter: '%c'\n", cadena, caracter);

    printf("  ft_strrchr(): ");
    if (ptr_ft_strrchr) {
        printf("%p (%s)\n", (void *)ptr_ft_strrchr, ptr_ft_strrchr);
    } else {
        printf("NULL\n");
    }

    printf("  strrchr(): ");
    if (ptr_strrchr) {
        printf("%p (%s)\n", (void *)ptr_strrchr, ptr_strrchr);
    } else {
        printf("NULL\n");
    }

    return 0;
}
