#include <stdio.h>
#include <stdlib.h>


int e_impar(int numero)
{
    return numero % 2 != 0;
}

int main()
{
    int numero_inteiro;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero_inteiro);

    if (e_impar(numero_inteiro))
    {
        printf("%d � um n�mero �mpar.\n", numero_inteiro);
    }
    else
    {
        printf("%d n�o � um n�mero �mpar.\n", numero_inteiro);
    }

    return 0;
}

