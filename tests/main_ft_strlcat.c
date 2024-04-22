#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../source_code/ft_strlcat.c"
#include "../source_code/ft_strlen.c"

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Uso: %s dest src size\n", argv[0]);
        return 1;
    }

	size_t N = strlen(argv[1]) + strlen(argv[2]) + 1;
    char dest[N];
	bzero(dest, N);
	strcpy(dest, argv[1]);
    
	size_t size = atoi(argv[3]);

    size_t result_ft = ft_strlcat(dest, argv[2], size);

    printf("Destino después de ft_strlcpy: %s\n", dest);
    printf("Resultado de ft_strlcpy: %zu\n", result_ft);

	bzero(dest, N);
	strcpy(dest, argv[1]);

    size_t result_std = strlcat(dest, argv[1], size);

    printf("Destino después de strlcpy: %s\n", dest);
    printf("Resultado de strlcpy: %zu\n", result_std);

    return 0;
}
