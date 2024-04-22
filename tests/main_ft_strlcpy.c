#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../source_code/ft_strlcpy.c"

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Uso: %s src size\n", argv[0]);
        return 1;
    }

	size_t N = strlen(argv[1] + 1);
    char dest[N];
    
	size_t size = atoi(argv[2]);

    size_t result_ft = ft_strlcpy(dest, argv[1], size);

    printf("Destino después de ft_strlcpy: %s\n", dest);
    printf("Resultado de ft_strlcpy: %zu\n", result_ft);

	bzero(dest, N);

    size_t result_std = strlcpy(dest, argv[1], size);

    printf("Destino después de strlcpy: %s\n", dest);
    printf("Resultado de strlcpy: %zu\n", result_std);

    return 0;
}
