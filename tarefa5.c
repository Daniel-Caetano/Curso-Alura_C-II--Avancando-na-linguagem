//Escreva uma função soma que recebe um array de inteiros
//e o tamanho do array, e retorna a soma dos números desse array.

#include <stdio.h>

int somaArray(int arrayInt[10])
{
    int soma = 0;
    for (int i = 0; i < 10; i++)
    {
        soma = soma + arrayInt[i];
    }

    return soma;
}

int main()
{
    int arrayInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma;

    soma = somaArray(arrayInt);

    printf("\nSOMA = |%i|", soma);
}