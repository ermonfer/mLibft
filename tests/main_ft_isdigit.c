#include <stdio.h>
#include <ctype.h>
#include "../source_code/ft_isdigit.c"

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %s argumento\n", argv[0]);
        return 1;
    }

    int arg = argv[1][0];

    // Comparar los resultados
    printf("ft_isdigit: %d\n", ft_isdigit(arg));
    printf("isdigit: %d\n", isdigit(arg));

    return 0;
}

