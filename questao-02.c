#include <stdio.h>
#include <stdlib.h>


int e_impar(int numero)
{
    return numero % 2 != 0;
}

int main()
{
    int numero_inteiro;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero_inteiro);

    if (e_impar(numero_inteiro))
    {
        printf("%d é um número ímpar.\n", numero_inteiro);
    }
    else
    {
        printf("%d não é um número ímpar.\n", numero_inteiro);
    }

    return 0;
}

