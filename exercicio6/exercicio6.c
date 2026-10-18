#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void formatar_nome_abnt(const char *nome_completo, char *saida_formatada)
{
    int i;
    int ultimo_espaco = -1;
    int pos_saida = 0;

    for (i = 0; nome_completo[i] != '\0'; i++)
    {
        if (nome_completo[i] == ' ')
        {
            ultimo_espaco = i;
        }
    }

    for (i = ultimo_espaco + 1; nome_completo[i] != '\0'; i++)
    {
        saida_formatada[pos_saida] = toupper(nome_completo[i]);
        pos_saida++;
    }


    saida_formatada[pos_saida] = ',';
    pos_saida++;

    saida_formatada[pos_saida] = ' ';
    pos_saida++;

  
    saida_formatada[pos_saida] = toupper(nome_completo[0]);
    pos_saida++;

    saida_formatada[pos_saida] = '.';
    pos_saida++;

    saida_formatada[pos_saida] = ' ';
    pos_saida++;


    for (i = 0; i < ultimo_espaco; i++)
    {
        if (nome_completo[i] == ' ' && i + 1 < ultimo_espaco)
        {
            saida_formatada[pos_saida] = toupper(nome_completo[i + 1]);
            pos_saida++;

            saida_formatada[pos_saida] = '.';
            pos_saida++;

            saida_formatada[pos_saida] = ' ';
            pos_saida++;
        }
    }


    saida_formatada[pos_saida] = '\0';
}

int main()
{
    char nome_completo[200];
    char saida_formatada[200];

    printf("Digite o nome completo: ");
    fgets(nome_completo, sizeof(nome_completo), stdin);

    nome_completo[strcspn(nome_completo, "\n")] = '\0';

    formatar_nome_abnt(nome_completo, saida_formatada);

    printf("Nome formatado: %s\n", saida_formatada);

    return 0;
}