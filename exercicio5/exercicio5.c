#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int concatenar_seguro(char *destino, const char *origem, int tamanho_max_destino)
{
    int tamanho_destino = strlen(destino);
    int tamanho_origem = strlen(origem);
    int i;

    if (tamanho_destino + tamanho_origem + 1 > tamanho_max_destino)
    {
        return 0;
    }

    for ( i = 0; origem[i] != '\0'; i++)
    {
        destino[tamanho_destino + i] = origem[i];
    }

    destino[tamanho_destino + i] = '\0';

    return 1;
}

int main()
{
    char destino[50];
    char origem[50];

    printf("Digite o texto de destino: ");
    fgets(destino, sizeof(destino), stdin);
    destino[strcspn(destino, "\n")] = '\0';

    printf("Digite o texto de origem: ");
    fgets(origem, sizeof(origem), stdin);
    origem[strcspn(origem, "\n")] = '\0';

    if (concatenar_seguro(destino, origem, sizeof(destino)) == 1)
    {
        printf("Concatenacao realizada com sucesso!\n");
        printf("Resultado: %s\n", destino);
    }
    else
    {
        printf("Nao ha espaco suficiente para concatenar.\n");
        printf("Destino continua: %s\n", destino);
    }

    return 0;
}