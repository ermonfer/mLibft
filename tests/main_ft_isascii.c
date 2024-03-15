#include <stdio.h>
#include <stdlib.h>
#include <stdlib.c>
#include "../source_code/ft_isascii.c"
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Uso: %d argumentos\n", argc - 1);
        return 1;
    }

    int c = atoi(argv[1]);

    // Comparar los resultados
    printf("ft_isascii: %d\n", ft_isascii(c));
    printf("isascii: %d\n", isascii(c));

    return 0;
}
