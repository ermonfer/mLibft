#include "../source_code/libft.h"
#include "../source_code/ft_strjoin.c"
#include "../source_code/ft_strlen.c"
#include "../source_code/ft_memcpy.c"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s <cadena1> <cadena2>\n", argv[0]);
        return 1;
    }

    char *s1 = argv[1];
    char *s2 = argv[2];

    printf("Cadena 1: %s\n", s1);
    printf("Cadena 2: %s\n", s2);

    char *joined = ft_strjoin(s1, s2);
    if (joined == NULL) {
        printf("Error: No se pudo concatenar las cadenas.\n");
        return 1;
    }

    printf("Cadenas concatenadas: %s\n", joined);

    free(joined); // Liberar la memoria alocada por ft_strjoin

    return 0;
}
