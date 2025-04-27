#include <stdio.h>
#define linha 10
#define coluna 10
#define alfab 10

int main(){

    int agua[linha][coluna] = {0};
    char letras[alfab] = {'A','B','C','D','E','F','G','H','I','J'};
    int navio[1] = {3};
    int acerto[3] = {5,7,9};

    // matriz do tabuleiro
    for (int i = 0; i < linha; i++)
    {
        for (int j = 0; j < coluna; j++)
        {
            agua[i][j] = 0;
        }
    }
    printf("  <> BATALHA NAVAL <>\n");
    printf("\n");
    printf("   1 2 3 4 5 6 7 8 9 10\n"); // numerando as colunas do tabuleiro
    // posicionando navio vertical
    for (int i = 1; i < 4; i++)
    {
        agua[i][2] = navio[0];
    }
    // posicionamento navio horizontal
    for (int j = 5; j < 8; j++)
    {
        agua[8][j] = navio[0];
    }
    // posiocionamento navio diagonal direita
    for (int i = 5; i < 8; i++)
    {        
        agua[i][i + 2] = navio[0];
    }
    // posiocionamento navio diagonal esquerda
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            agua[j][14 - j - 7] = navio[0];
        }
    }
    // posiocionamento atk cruz
    for (int i = 3; i < 6; i++) 
    {
        agua[i][4] = acerto[1];
    }
    for (int j = 3; j < 6; j++)
    {
        agua[4][j] = acerto[1];
    }
    // posicionamento atk triangulo
    for (int j = 0; j < 5; j++)
    {
        agua[9][j] = acerto[0];
    }
    for (int j = 1; j < 4; j++)
    {
        agua[8][j] = acerto[0];
    }
    for (int i = 2; i < 3; i++)
    {
        agua[7][i] = acerto[0];
    }
    // posicionamento atk octaedro
    for (int i = 1; i < 2; i++)
    {
        agua[i][8] = acerto[2];
    }
    for (int j = 7; j < 10; j++)
    {
        agua[2][j] = acerto[2];
    }
    for (int i = 3; i < 4; i++)
    {
        agua[i][8] = acerto[2];
    }
    // inicialização do tabuleiro
    for (int i = 0; i < linha; i++)
    {
        printf("%2c", letras[i]); // linhas do tabuleiro
        for (int j = 0; j < coluna; j++)
        {
            printf("%2d", agua[i][j]); // tabuleiro com valores atualizados
        }
        printf("\n");
    }
    return 0;
}