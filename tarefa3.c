//Escreva uma função soma que recebe um ponteiro de inteiro num e mais dois inteiros a e b.
// A função deve calcular a soma de a+b em num.

#include <stdio.h>

void somaAB(int numA, int numB, int *soma)
{
    (*soma) = numA + numB;
}

int main()
{
    int numA = 5;
    int numB = 5;
    int soma = 0;
    somaAB(numA, numB, &soma);
    printf("\nSOMA = %i", soma);
}