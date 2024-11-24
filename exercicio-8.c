#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* concatenar_strings(const char* string1, const char* string2)
{
    int tamanho_total = strlen(string1) + strlen(string2) + 1;

    char* resultado = (char*)malloc(tamanho_total * sizeof(char));
    if (resultado == NULL)
    {
        printf("Erro ao alocar memória.\n");
        exit(1);
    }

    strcpy(resultado, string1);
    strcat(resultado, string2);

    return resultado;
}

int main()
{
    char string1[100], string2[100];

    printf("Digite a primeira string: ");
    fgets(string1, sizeof(string1), stdin);
    string1[strcspn(string1, "\n")] = 0;

    printf("Digite a segunda string: ");
    fgets(string2, sizeof(string2), stdin);
    string2[strcspn(string2, "\n")] = 0;

    char* resultado = concatenar_strings(string1, string2);

    printf("String concatenada: %s\n", resultado);

    free(resultado);

    return 0;
}

