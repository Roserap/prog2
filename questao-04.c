#include <stdio.h>
#include <stdlib.h>

int encontrar_maior(int array[], int tamanho)
{
    int maior = array[0];

    for (int i = 1; i < tamanho; i++)
    {
        if (array[i] > maior)
        {
            maior = array[i];
        }
    }
    return maior;
}

int main()
{
    int tamanho;

    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);

    int array[tamanho];

    printf("Digite os %d elementos do array:\n", tamanho);
    for (int i = 0; i < tamanho; i++)
    {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int maior_valor = encontrar_maior(array, tamanho);
    printf("O maior valor do array é: %d\n", maior_valor);

    return 0;
}

