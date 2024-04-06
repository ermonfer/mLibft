#include <stdio.h>
#include <stdlib.h> // Para strtol
#include <string.h> // Para strdup y strlen
#include "../source_code/ft_bzero.c"
#include "../source_code/ft_memset.c"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Introduzca 2 args en lugar de %d\n", argc - 1);
        return 1;
    }

    char *str1 = strdup(argv[1]);
    char *str2 = strdup(argv[1]);
	size_t len = (size_t)strlen(argv[1]);

    // Convertir el segundo argumento a size_t
    size_t n = (size_t)strtoul(argv[2], NULL, 10);
	
    // Prueba de la función ft_bzero
	ft_bzero(str1, n);
	printf("ft_bzero:\n");
    for (size_t i = 0; i < len; ++i) {
        printf("%u ", (unsigned int)str1[i]);
    }
    printf("\n");

    // Prueba de la función bzero
	bzero(str2, n);
	printf("ft_bzero:\n");
    for (size_t i = 0; i < len; ++i) {
        printf("%u ", (unsigned int)str2[i]);
    }
    printf("\n"); 
    free(str1);
    free(str2);

    return 0;
}
