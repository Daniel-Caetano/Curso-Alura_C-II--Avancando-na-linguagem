/*||||||||-Autor : Daniel Caetano de Souza Ferreira|||||||||||||||||||||||||||||||||||||||||||||||||||||||
||||||||||-Jogo Criado acompanhando as aulas no Curso do site ALURA: ícone C II: Avançando na linguagem|||
||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||
|Nosso próximo objetivo é desenvolver um jogo de forca. 
|O computador escolherá, de maneira randômica, uma palavra que está salva em um arquivo de palavras, e o jogador deve chutar, letra por letra, até adivinhar a palavra.
| Se o jogador chutar 5 letras erradas, ele perde. 
|Ao final, o computador oferecerá a possibilidade do usuário inserir uma nova palavra no banco de dados.|*/

#include <stdio.h>
#include <string.h>

void abertura()
{
    printf("\n\n/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

void chuta(char chutes[26], int *tentativas)
{
    char chute;
    printf("\nQual letra?");
    scanf(" %c", &chute);
    chutes[(*tentativas)] = chute;
    (*tentativas)++;
    //printf("\nTENTATIVAS| %i |=| END| %i|", tentativas, (*tentativas));
}

int ja_achou(char palavraSecreta, char chutes[26], int tentativas)
{
    int achou = 0;
    for (int j = 0; j < tentativas; j++)
    {
        if (palavraSecreta == chutes[j])
        {
            achou = 1;
            break;
        }
    }

    return achou;
}

void desenhaForca(char palavraSecreta[20], char chutes[26], int tentativas)
{
    for (int i = 0; i < strlen(palavraSecreta); i++)
    {
        int achou = 0;
        achou = ja_achou(palavraSecreta[i], chutes, tentativas);

        if (achou)
        {
            printf("%c ", palavraSecreta[i]);
        }
        else
        {
            printf("_ ");
        }
    }
}
int main()
{
    int acertou = 0;
    int enforcou = 0;
    char palavraSecreta[20];
    char chute;
    char chutes[26];
    int tentativas = 0;

    sprintf(palavraSecreta, "MELANCIA");

    abertura();

    do
    {
        desenhaForca(palavraSecreta, chutes, tentativas);

        chuta(&chutes, &tentativas);

    } while (!acertou && !enforcou);
}