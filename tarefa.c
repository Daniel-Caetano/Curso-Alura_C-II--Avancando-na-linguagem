
//Escreva uma função potencia() que receba dois inteiros, a e b,
//calcule a potência a^b, ou seja, a elevado a b e imprima o resultado.

#include <stdio.h>

void calcula_potencia(int numA, int numB)
{
    int a = numA;
    int b = numB;
    int resultado;

    resultado = pow(a, b);
    printf("\n --->>> Resultado potencializacao: %i <<<----\n", resultado);
}

int main()
{
    int numA;
    int numB;

    printf("\nDigite dois numeros para calcular a potencia");
    printf("\nBase: ");
    scanf("%i", &numA);
    printf("\nElevado a: ");
    scanf("%i", &numB);
    calcula_potencia(numA, numB);
}