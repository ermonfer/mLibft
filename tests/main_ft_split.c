#include "../source_code/libft.h"
#include "../source_code/ft_strchr.c"
#include "../source_code/ft_substr.c"
#include "../source_code/ft_split.c"
#include "../source_code/ft_strdup.c"
#include "../source_code/ft_strlen.c"
#include "../source_code/ft_memcpy.c"
#include <stdio.h>

int main(void)
{
    char const *s = "Hello World! This is a test string.";
    char c = ' ';

    char **result = ft_split(s, c);
    if (result == NULL)
    {
        printf("Error: ft_split returned NULL\n");
        return 1;
    }

    printf("Split string:\n");
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]); // Free each word
    }
    free(result); // Free the array of words

    return 0;
}

