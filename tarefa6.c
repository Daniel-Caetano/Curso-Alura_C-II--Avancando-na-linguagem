//Escreva um código que abre o arquivo "teste.txt" em modo somente leitura.
//Trate também a possibilidade de erro na abertura.

#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *f;
    f = fopen("teste.txt", "r"); // para testar caso de erro mude o nome do teste.txt
    if (!f)
    {
        printf("\n\nteste.txt não pode ser aberto!!");
        exit(1);
    }
    else
    {
        printf("\n\nArquivo aberto com sucesso!!!");
    }
    fclose(f);
}