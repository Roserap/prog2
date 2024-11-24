#include <stdio.h>
#include <stdlib.h>

int calcular_dobro(int numero)
{
    return numero * 2;
}

int main()
{
    int numero_inteiro;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &numero_inteiro);

    if (numero_inteiro < 0)
    {
        printf("Por favor, insira um número inteiro não negativo.\n");
    }
    else
    {
        int resultado = calcular_dobro(numero_inteiro);
        printf("O dobro de %d é %d.\n", numero_inteiro, resultado);
    }

    return 0;
}

