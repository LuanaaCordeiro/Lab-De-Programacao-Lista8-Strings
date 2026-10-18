#include <stdio.h>
#include <stdlib.h>
#include<string.h>

int meu_strlen(const char *str)
{
    int count = 0;

    while (str[count] != '\0')
    {

        count++;
    }

    return count;
}

int main()
{
    char buffer[256];

    printf("Introduza uma frase: ");
    fgets(buffer, sizeof(buffer), stdin);

    printf("Tamanho calculado pela sua funcao: %d\n", meu_strlen(buffer));
    printf("Tamanho calculado pela biblioteca: %lu", strlen(buffer));

    return 0;
}