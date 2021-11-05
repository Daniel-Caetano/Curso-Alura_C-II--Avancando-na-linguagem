
//Escreva a mesma função de potencia que você fez na aula anterior,
//só que dessa vez, o resultado deve ser salvo em um inteiro
///que vem na lista de parâmetros da função.Para isso,
//claro, você precisará receber um ponteiro de inteiro :

#include <stdio.h>

void calcula_potencia(int numA, int numB, int *resultado)
{
    int a = numA;
    int b = numB;

    (*resultado) = pow(a, b);
}

int main()
{
    int numA;
    int numB;
    int resultado;

    printf("\nDigite dois numeros para calcular a potencia");
    printf("\nBase: ");
    scanf("%i", &numA);
    printf("\nElevado a: ");
    scanf("%i", &numB);
    calcula_potencia(numA, numB, &resultado);
    printf("\n --->>> Resultado potencializacao: %i <<<----\n", resultado);
}