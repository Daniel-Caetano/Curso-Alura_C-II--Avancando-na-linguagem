//Escreva uma função soma(int numeros[10]) que receba um array de inteiros
//e imprime a soma de todos os elementos dentro desse array.

#include <stdio.h>

void somaArray(int *arrayInt)
{
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma = soma + arrayInt[i];
    }
    printf("\nResultado soma: %i ", soma);
}

int main()
{
    int arrayInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    somaArray(arrayInt);
}
