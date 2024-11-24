#include <stdio.h>
#include <stdlib.h>

int calcular_dobro(int numero)
{
    return numero * 2;
}

int main()
{
    int numero_inteiro;

    printf("Digite um n�mero inteiro n�o negativo: ");
    scanf("%d", &numero_inteiro);

    if (numero_inteiro < 0)
    {
        printf("Por favor, insira um n�mero inteiro n�o negativo.\n");
    }
    else
    {
        int resultado = calcular_dobro(numero_inteiro);
        printf("O dobro de %d � %d.\n", numero_inteiro, resultado);
    }

    return 0;
}

