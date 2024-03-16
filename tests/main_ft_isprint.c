#include <stdio.h>
#include <ctype.h>
#include "../source_code/ft_isprint.c"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s argumento\n", argv[0]);
        return 1;
    }

    int arg = argv[1][0];

    // Comparar los resultados
    printf("ft_isprint: %d\n", ft_isprint(arg));
    printf("isprint: %d\n", isprint(arg));

    return 0;
}

